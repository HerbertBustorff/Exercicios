#include <stdio.h>


int main (void){
	
	int n;
	int numero = 1;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if (n > 0){
		for(n ; n > numero; n--){
		printf("%d ", n);
		}
	}
	else{
		printf("Numero invalido...");
	}
		
	
	return 0;
}
