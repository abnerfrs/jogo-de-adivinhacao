#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

printf("\n***********************************\n\n Bem vindo ao jogo de adivinhação! \n\n***********************************\n");


// Dificuldade do Game

int nivel;
int numerotentativas;

printf("\n\nEscolha um nível de dificuldade: \n (1) Fácil (2) Médio (3) Díficil\n\n");
scanf("%d", &nivel);

switch(nivel) {

	case 1:
	numerotentativas = 20;
	break;

	case 2:
	numerotentativas = 15;
	break;

	case 3:
	numerotentativas = 10;
	break;

	default:
	printf("\nInsira de 1 a 3, por favor!\n");
	numerotentativas = 0;
}

int chute;
double totalpontos = 1000;

//Random para o número Secreto

int segundos = time(0);
srand(segundos);

int numerorandom = rand();
int numerosecreto = numerorandom % 100;

if (numerotentativas > 0){
printf("\nVocê tem %d tentativas, chute para acertar o número secreto\n", numerotentativas);
}


// Laço de Repetição para chutar

for (int i = 1; i <= numerotentativas; i++){
	printf("\n__________________________\n\nTentativa %d, chute um número:\n", i);
	scanf("%d", &chute);

int acertou = (chute == numerosecreto);

	if (acertou){
		break;
	} else if(chute > numerosecreto){
		printf("\n%d é maior que o número secreto\n", chute);
	} else if(chute <= 0){
		printf("\n Chute um número maior que 0\n");
	} else {
		printf("\n%d é menor que o número secreto\n", chute);
	}

totalpontos = totalpontos - (abs(chute) / 2);
}

int acertou = (chute == numerosecreto);

if (acertou){
printf("\n***********************************************\n\n Parabéns, você acertou! O número secreto é %d\n", numerosecreto);
printf("\n Fim de jogo! Total de Pontos: %.1f\n\n***********************************************\n", totalpontos);
}

}