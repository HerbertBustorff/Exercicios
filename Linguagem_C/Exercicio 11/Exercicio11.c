#include <stdio.h>

int main(void){
	
	int quantidadeDeNumerosPares = 0;
	int valorParaMedia = 0;
	double  soma = 0.0;
	
	do{
		printf("Digite um valor  diferente de zero: ");
		scanf("%i", &valorParaMedia);
		
		if((valorParaMedia % 2 == 0) && (valorParaMedia != 0)){	
			quantidadeDeNumerosPares += 1; 
			soma += valorParaMedia; 
		}
	}while(valorParaMedia != 0);
	
	double	mediaFinal = soma / quantidadeDeNumerosPares;
	printf("A media de todos os numeros pares digitados e: %.2lf\n", mediaFinal);
	
	return 0;
}
