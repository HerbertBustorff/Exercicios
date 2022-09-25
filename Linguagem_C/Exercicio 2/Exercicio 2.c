#include <stdio.h>


int main(void){
	
	int a = 10;
	int b = 20;
	int c ;
	
	c = a;
	a = b;
	b = c;
	
	printf("%i, %i", a, b);
	
	
	return 0;
}
