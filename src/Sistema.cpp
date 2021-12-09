#include "Sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

/* COMANDOS */
string Sistema::quit() {
  return "Saindo...";
}

//checkin 3, vou considerar 0.1 mas ainda tem muito trabalho pra fazer
//voces não atualizaram Sistema.h com a lista de usuários nem fizeram geração de ids
string Sistema::create_user (const string email, const string senha, const string nome) {
	// Valida se todos os campos foram inseridos 
	if(email == "" || senha == "" || nome == "")
		return "Preencha todos os campos por favor, pois são todos obrigatórios";

	// Verifica se o formato do email está correto
	// Adicionar experssão regular
	// Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)"); - Ver com o professor se necessita usar tal expressão 
	// Professor: não precisa :)

	// Checar se já existe o email
	vector<Usuario>::iterator i;
	for(i = usuarios.begin(); i != usuarios.end(); i++){
		if(i->getEmail() == email) return "Esse email já consta no cadastro";
	}

	// Inserir um novo usuário no sistema, tendo em vista que será descartado o id = 0
	Usuario usuario(id, email, senha, nome);
	usuarios.push_back(usuario);

	return "Usuário do id = " + to_string(id) + " foi criado com sucesso!";
}

std::string Sistema::delete_user (const std::string email, const std::string senha){
	return "delete_user NÃO IMPLEMENTADO";
}

string Sistema::login(const string email, const string senha) {
	return "login NÃO IMPLEMENTADO";
}

string Sistema::disconnect(int id) {
	return "disconnect NÃO IMPLEMENTADO";
}

//checkin 2
//vou considerar 0.1 pelo esforço, mas realmente não teve muita mudança
//para poder testar o checkin 2 vc precisava ao menos ter feito o 1.
string Sistema::create_server(int id, const string nome)  { 
  load(); //esse método?
 //<! Verifica se existe usuario esta logado 
  if (loggedUsuarioId == 0) {
  //<! se nao estiver retorna esta mensagem  
    return "Não está conectado";
  }
  vector<Servidor>::iterator it;
 //<! verifica se ja ha um servidor com mesmo nome caso não exista inicia criação de um. 
  it = find_if(servidores.begin(), servidores.end(), [nome](Servidor servidor) {
    return nome == servidor.getNome();
  });
  if (it != servidores.end()) {
    return "ja existe um servidor com  esse nome ";
  }

string Sistema::set_server_desc(int id, const string nome, const string descricao) {
	return "set_server_desc NÃO IMPLEMENTADO";
}

string Sistema::set_server_invite_code(int id, const string nome, const string codigo) {
	return "set_server_invite_code NÃO IMPLEMENTADO";
}

string Sistema::list_servers(int id) {
	return "list_servers NÃO IMPLEMENTADO";
}

string Sistema::remove_server(int id, const string nome) {
	return "remove_server NÃO IMPLEMENTADO";
}

string Sistema::enter_server(int id, const string nome, const string codigo) {
	// Condição para verificar se o usuário já está correto ou se foi inserido um id inexistente.
	if (!usuarioLogado(id) || id == 0){
		return "Usuário não logado ou id incorreto";
	} 
	// Obs: fará mais sentido quando a classe servidor for implementada
	// Certamente da forma que está, o código provavelmente não rodará
}

string Sistema::leave_server(int id, const string nome) {
	return "leave_server NÃO IMPLEMENTADO";
}

string Sistema::list_participants(int id) {
	return "list_participants NÃO IMPLEMENTADO";
}

string Sistema::list_channels(int id) {
	return "list_channels NÃO IMPLEMENTADO";
}

string Sistema::create_channel(int id, const string nome) {
	return "create_channel NÃO IMPLEMENTADO";
}

string Sistema::remove_channel(int id, const string nome) {
	return "remove_channel NÃO IMPLEMENTADO";
}

string Sistema::enter_channel(int id, const string nome) {
	return "enter_channel NÃO IMPLEMENTADO";
}

string Sistema::leave_channel(int id) {
	return "leave_channel NÃO IMPLEMENTADO";
}

string Sistema::send_message(int id, const string mensagem) {
	return "send_message NÃO IMPLEMENTADO";
}

string Sistema::list_messages(int id) {
	return "list_messages NÃO IMPLEMENTADO";
}

