#include <stdio.h>

int main (void){
	double num = 0.0;
	double soma = 0.0;
	int pararCodigo = 0;	
		
	while (pararCodigo < 10){
		printf("Digite um valor: ");
		scanf("%lf", &num);
		soma += num;
		
		pararCodigo += 1;
	}	
	
	double media = soma / 10.0;
	printf("A media desses numeros e: %.2lf\n", media);
		
	return 0;
} 
