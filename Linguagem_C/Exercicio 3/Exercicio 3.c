#include <stdio.h>

int main(void){
	
	int maca = 0;
	float precoTotal = 0.0;
	
	printf("Quantas macas voce vai querer comprar?\n");
	scanf("%i", &maca);
	
	precoTotal = maca * (maca >= 12 ? 1.0 : 1.30);
	printf("Custa R$ %.2f\n", precoTotal);
	
	return 0;
}
