#include <stdio.h>

double calcularAlcool (double litrosAlcool){
	if (litrosAlcool < 20){
		litrosAlcool = (litrosAlcool * 0.90) - ((litrosAlcool * 0.90) * 0.03);	
		return litrosAlcool;
	}
	else{
		litrosAlcool = (litrosAlcool * 0.90) - ((litrosAlcool * 0.90) * 0.05);
		return litrosAlcool;
	}
	
}

double calcularGasolina (double litrosGasolina){
	if (litrosGasolina < 20){
		litrosGasolina = (litrosGasolina * 1.20) - ((litrosGasolina * 1.20) * 0.04);
		return litrosGasolina;
	}
	else{
		litrosGasolina = (litrosGasolina *1.20) - ((litrosGasolina * 1.20) * 0.06);
		return litrosGasolina;
	}
}

int main(void){
	double lAlcool = 0;
	double lGasolina = 0;
	int alcoolOuGasolina = 0;
	double result = 0;
	double valorAlcool = 0;
	
	printf ("Digite 1 para Alcool e 2 para Gasolina: ");
	scanf ("%i", &alcoolOuGasolina);
	
	switch (alcoolOuGasolina){
		case 1:
			printf("Digite quantos litros de alcool voce quer colocar: ");
			scanf ("%lf", &lAlcool);
			result = calcularAlcool(lAlcool);
			printf("O valor deu R$ %.2lf", result);
			break;
		case 2:
			printf("Digite quantos litros de gasolina voce quer colocar: ");
			scanf("%lf", &lGasolina);
			result = calcularGasolina(lGasolina);
			printf("O valor deu R$ %.2lf", result);
			break;
			
	}	
	
	return 0;
}
