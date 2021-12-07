#include "Sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

#include "Sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>

/* COMANDOS */
string Sistema::quit() {
  return "Saindo...";
}

string Sistema::create_user (const string email, const string senha, const string nome) {
	return "create_user NÃO IMPLEMENTADO";
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

string Sistema::create_server(int id, const string nome)  { 
  load(); 
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
	return "enter_server NÃO IMPLEMENTADO";
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

