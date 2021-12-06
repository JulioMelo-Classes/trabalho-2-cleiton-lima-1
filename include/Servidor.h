#ifndef SERVIDOR_H
#define SERVIDOR_H
#include <vector>
#include <string>
#include <iostream>



class Servidor {
  private:
    int donoId; 
    std::string nome; 
    std::string description;  
    std::string codigodeConvite; 
    std::vector<int> membroIds; 
    std::vector<Canal*> canais; 
  public:
    /*! 
      Construtor da classe Servidor
    */
    Servidor();
    /*! Cria um construtor com parâmetros
          @param pdonoId representa o Id do dono do servidor
          @param pnome o nome passado na criação do novo servidor
          @return dados do servidor
    */
    Servidor(const int pdonoId, const std::string pnome); 
    
    ~Servidor(); 

    int getDono(); 
    std::string getNome(); 
    std::string getDescricao(); 
    std::string getCodigoConvite(); 
    std::vector<int> getMembrosIds(); 
  
    void setDescricao(const std::string desc); 
    void setCodigoConvite(const std::string code); 
    
    void addMembro(const int id); 
    void addCanal(Canal* novoCanal);
};

#endif
