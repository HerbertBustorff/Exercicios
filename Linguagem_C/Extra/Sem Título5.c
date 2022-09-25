#include <stdio.h>

double calcularCombustivel (double qtdLitros, double valorDesconto, double valorLitros){
	double precoTotalLitros = qtdLitros * valorLitros;
	return precoTotalLitros - (precoTotalLitros * valorDesconto);	 
}

int main(void){
	double litros = 0,result = 0,valorDesconto = 0,valorLitros = 0;
	int alcoolOuGasolina = 0;
	
	printf ("Digite 1 para Alcool e 2 para Gasolina: ");
	scanf ("%i", &alcoolOuGasolina);
	
	printf("Digite quantos litros de combustivel voce quer colocar: ");
	scanf ("%lf", &litros);
	
	switch (alcoolOuGasolina){
		case 1:
			valorDesconto = litros < 20 ? 0.03 : 0.05;
			valorLitros = 0.9;
			result = calcularCombustivel(litros, valorDesconto, valorLitros);
			break;
		case 2:
			valorDesconto = litros < 20 ? 0.04 : 0.06;
			valorLitros = 1.2;
			result = calcularCombustivel(litros, valorDesconto, valorLitros);
			break;
		default :
			printf("Opcao invalida");		
	}	
	
	printf("O valor deu R$ %.2lf", result);
	
	return 0;
}
