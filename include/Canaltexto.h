#ifndef CANAL_TEXTO_H
#define CANAL_TEXTO_H

#include <vector>
#include "mensagem.h"
#include "canal.h"


// classe representante de canaltexto 
class CanalTexto : public Canal {
  private:
    std::vector<Mensagem> mensagens; 
  public:
    CanalTexto(std::string nome); 
    ~CanalTexto(); 

    tipoCanal  getTipo(); 
    std::vector<Mensagem> getMensagens(); 

    void addMensagem(Mensagem novaMensagem); 
    std::string printMensagens(std::vector<Usuario> usuarios); 
    
};

#endif
