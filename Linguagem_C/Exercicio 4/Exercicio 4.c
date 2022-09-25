#include <stdio.h>


int main(void){
	
	int flamengo;
	int vasco;
	
	printf("Quantos gols o flamengo fez? ");
	scanf("%i", &flamengo);
	
	printf("Quantos gols o vasco fez? ");
	scanf("%i", &vasco);
	
	if (flamengo > vasco){
		printf("Flamengo ganhou!!");
	}
	
	else if (flamengo < vasco){
		printf("Vasco ganhou!!");
	}
	else {
		printf("Empate!!");
	}
	
	
	
	return 0;
}
