#include <iostream>
#include "CanalTexto.h"

using namespace std;

CanalTexto::CanalTexto(string nome) {
}

CanalTexto::~CanalTexto() {
}

vector<Mensagem> CanalTexto::getMensagens() {
  return mensagens;
}

void CanalTexto ::addMensagem(Mensagem novaMensagem) {
  mensagens.push_back(novaMensagem);
}

 
string CanalTexto ::printMensagens(vector<Usuario> usuarios) {
  if (mensagens.size() > 0) {
    ostringstream output;

    for (auto it = mensagens.begin(); it != mensagens.end(); ++it) {
      string nome = usuarios[it->getEnviadaPor() - 1].getNome();
      string data = it->getDataHora();
      string conteudo = it->getConteudo();

      output << nome << "<" << data << ">: " << conteudo << endl;
    }

    return output.str();
  }
  return "Sem mensagens no momento para exibir"; 
}
