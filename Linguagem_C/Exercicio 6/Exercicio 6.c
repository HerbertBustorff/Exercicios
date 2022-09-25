#include <stdio.h>

double calcularKg(double qtdKg, double valor){
	double valorTotal =  0.0;
	double precoTotalKg = 0.0; 
	double valorDesconto = 0.10;
	
	precoTotalKg = qtdKg * valor;
	
 	if ((qtdKg > 8) || (precoTotalKg > 25)) {
		precoTotalKg = precoTotalKg - (precoTotalKg * valorDesconto);	
	}
	
	return precoTotalKg;
}


int main(void){
	
	int opcao = 0;
	double precoPorKg  = 0.0;
	double qtdKg = 0.0;
	double result = 0.0;
	
	printf("Digite 1 para comprar MORANGO e 2 para comprar MACA \n");
	scanf("%i", &opcao);
	
	printf("Quantos KG voce deseja? \n");
	scanf("%lf", &qtdKg);
	
	switch (opcao){
		case 1: 
			precoPorKg = qtdKg <= 5 ? 2 : 1.8 ;
			result = calcularKg(qtdKg, precoPorKg);
			break;
		case 2:
			precoPorKg = qtdKg <= 5 ? 1.50 : 1.10;
			result = calcularKg(qtdKg, precoPorKg);
			break;
		default:
			printf("Opcao invalida... \n");			
		
	}	
	printf("Custa R$%.2f\n", result);
	return 0;
}
