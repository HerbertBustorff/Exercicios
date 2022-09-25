#include <stdio.h>

int main(void){
	
	
	double indicePoluicao;
	
	printf("Digite o indice de poluicao: ");
	scanf("%lf", &indicePoluicao);
	
	if((indicePoluicao >= 0.05) && (indicePoluicao <= 0.25)){
		printf("Poluicao aceitavel!!!");
	} 
	else if ((indicePoluicao >= 0.3) && (indicePoluicao < 0.4)){
		printf("Evacuar industrias do primeiro setor!!!");
	}
	else if ((indicePoluicao >= 0.5)){
		printf("Evacuar primeiro, segundo e terceiro setor!!!");
	}	
	
	return 0;
}
