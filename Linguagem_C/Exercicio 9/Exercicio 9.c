#include <stdio.h>


int main(void){
	
	int n;
	int n2 = 1;
	
	printf("Digite um numero de 1 a 10 \n");
	scanf("%i", &n);

	if(n > 10){
		printf("Opcao invalida...");
	}
	else if(n < 0){
		printf("Opcao invalida");
	}
	else{
		for(n2 ; n2 <= 10; n2++){
			
			printf ("%i ", n * n2);
		}					
	}	
	
	
	
	return 0;
}
