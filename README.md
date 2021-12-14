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
Cadastra um novo usuário com as informações de nome, email e senha (caso não exista um usuário com o mesmo email). gera um ID automaticamente

_Exemplo de entrada/saída:_
```console
create-user pedrinhocasahshow@protonmail.com  Somoslindos123 pedrinCS
"Usuário criado"

create-user pedrinhocasashow@protonmail.com Somoslindos123 pedrinCS
"Usuário já existe!
```

#### **disconnect**
Desconecta o usuário atual do sistema, resetando as variáveis que armazenam o ID do usuário logado.

_Exemplo de entrada/saída:_
```console
disconnect
"Desconectando usuário pedrinhoCS.com"

disconnect
"Não está conectado"
```
#### **login**
Caso exista no sistema um usuário com o email e a senha inseridos, efetua o seu login, ou seja, altera a variável que armazena o ID do usuário logado.

_Exemplo de entrada/saída:_
```console
login pedrinhocasahshow.com SENHA_ERRADA
"Senha ou usuário inválidos!"

login pedrinhocasahshow.com somoslindos123
"Logado com pedrinhocasahshow.com"
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

