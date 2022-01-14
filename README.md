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
Cria um novo usuario, caso não exista nenhum com o mesmo nome. deve ser informado e-mail e senha,Caso consiga, deve emitir um texto informando que o usuário foi inserido com sucesso.  

_Exemplo de entrada/saída:_
```
create-user tonin@gmail.com super234 tonho
“Usuário criado”

create-user tonin@gmail.com super234 tonho
“Usuário já existe!”
```

#### **delete_user**
_Exemplo de entrada/saída:_
```
delete-user tonin@gmail.com super234
“Usuário removido”

delete-user tonin@gmail.com super234
“Usuário não cadastrado!”

```
#### **creat_server**
_Exemplo de entrada/saída:_
```
create-server 1 minha-casa
“Servidor criado”

create-server 1 minha-casa
“Servidor com esse nome já existe”
```
#### **dificuldades_itens_nao_implementados**
_limitações_

*tempo

*computador_por_parte_jean

*modelagem_De_problema

*implementar_funcoes



# Avaliação
## Funcionalidades
- A1.2 50%
Como você implementou a classe usuário e parte do método vou considerar 50%.
- A1.3 nok
- A1.4 nok
- A2.1 nok
- A2.2 10%
Como a classe servidor não está implementada, mas parte do método está vou considerar 10%.
- A2.3 nok
- A2.4 nok
- A2.5 nok
- A2.6 nok
- A2.7 nok
- A2.8 nok
- A2.9 nok
- B1.1 nok
- B1.2 nok
- B1.3 nok
- B1.4 nok
- B1.5 nok
- B2.1 nok
- B2.2 nok

## Classes
- Servidor nok
não implementada
- Canal ok
- Mensagem ok

## Boas Práticas
- Documentação 10%
Algumas classes/métodos estão documentadas outras não estão
- Testes nok
- Organização ok

## Observações