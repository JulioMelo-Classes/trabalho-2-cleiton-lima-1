#ifndef CANAL_TEXTO_H
#define CANAL_TEXTO_H

#include <iostream>
#include <vector>
#include "Mensagem.h"
#include "Usuario.h"



// classe representante de canaltexto 
class CanalTexto {
  private:
    int id;
    std::string nome;
    std::vector<Mensagem> mensagens; //<! vetor que Lista de mensagens de texto. 
    std::string dono;
  
  public:
    CanalTexto(std::string nome); //<! Constructor de CanalTexto 
    ~CanalTexto(); //<! Destrutor de CanalTexto

    std::vector<Mensagem> getMensagens(); //<! retorna o vetor de mensagens

    void addMensagem(Mensagem novaMensagem); //<! Adiciona uma nova mensagem a lista
    std::string printMensagens(std::vector<Usuario> usuarios); //<! Retorna a lista de mensagens formatadas em string
    
};

#endif