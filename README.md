# Atividade 02 de LP1 - Projeto Concordo

## Sobre
Projeto semelhante a ferramenta Discord, assimilando apenas a parte de backend da aplicação

## Para compilar

Com cmake:
```console
mkdir build
cd build
cmake ..
cmake --build .
```

## Para executar
Você pode rodar o sistema e em logo depois digitar os comandos seguidos de ENTER
```console
cd build
./concordo
```

Ou pode criar um arquivo de texto com uma lista de comandos (um por linha) e executar o sistema redirecionando esse arquivo como entrada padrão:
```console
cd build
./concordo < ../data/script_comandos.txt
```
#### **create-user**
Cria um novo usaario, caso não exista nenhum com o mesmo nome. deve ser informado e-mail e senha,Caso consiga, deve emitir um texto informando que o usuário foi inserido com sucesso.  

_Exemplo de entrada/saída:_
create-user tonin@gmail.com super234 tonho
“Usuário criado”

create-user tonin@gmail.com super234 tonho
“Usuário já existe!”


#### **delete_user**
_Exemplo de entrada/saída:_

delete-user tonin@gmail.com super234
“Usuário removido”

delete-user tonin@gmail.com super234
“Usuário não cadastrado!”

#### **dificuldades_itens_nao_implementados**
_limitações_

*tempo
*indetação 
*computador_porparte_jean
*modelagem_De_problema


