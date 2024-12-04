# Sejam Bem Vindos || Welcome to the Guessing game

Este é meu código em C, o **Jogo de Adivinhação**! Ele é um jogo criado para explorar os conceitos da linguagem C, laços de repetições, variáveis, funções, escopos globais e etc. Aqui irei detalhar como você pode executar o código e jogar!

# Compilação(melhor em **Linux e MacOS**)

Para jogar, disponibilizei o arquivo **projetofinal** que está compilado de **projetofinal.c**, Nele ao executar o comando: <br> **gcc projetofinal.c -o projetofinal.out** você poderá compilar(inclusive mudar o nome "projetofinal" para outro de preferência).

# Dificuldade

Escolha a dificuldade do jogo, se escolher 1, 2 ou 3 você terá 20, 15 e 10 tentativas respectivamente.

# Sistema de Pontos

O jogador começa com 1000 pontos e toda vez que errar é subtraído os pontos, o método que usei foi pegar o **número chutado e dividir por 2** a cada iteração-> (abs(chute) / 2)

# Dica do jogo

Toda vez que o usuário chutar um número, será retornado se o número é maior ou menor que o número secreto. (Teste chutar 0)

# Plus: 

O número secreto é randômico(muda a cada novo jogo), pois está sendo utilizada a lib **time.h** == time(0), ou seja, a cada novo segundo diferente do anterior o módulo(resto da divisão) é de 100, sendo gerada 2 casas decimais. Portanto, o número secreto sempre terá 2 casas decimais de 1 à 99.
