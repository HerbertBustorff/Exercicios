#include <stdio.h>

int main(void){	
	double salarioPorFamilia = 0.0;
	double filhosPorFamilia = 0;
	double qtdDeFilhos = 0.0;
	double somaFilhos = 0.0;
	double somaSalario = 0.0;
	double maiorSalario = 0.0;
	double pessoasAteCemReais = 0.0;	
	
	do{
		printf("Digite seu salario:\n");
		scanf("%lf", &salarioPorFamilia);
	
		printf("Quantos filhos voce tem ?\n");
		scanf("%lf", &filhosPorFamilia);
			
		if (salarioPorFamilia > 0.0){
			
			if(maiorSalario < salarioPorFamilia){
				maiorSalario = salarioPorFamilia;
			}
			if(salarioPorFamilia < 100.0){
				pessoasAteCemReais += 1.0;
			}
			
			somaFilhos += filhosPorFamilia;
			somaSalario += salarioPorFamilia;
			qtdDeFilhos += 1.0;
		}
		
	}while(salarioPorFamilia > 0.0);

	double mediaSalario = somaSalario / qtdDeFilhos;
	double mediaFilhos = somaFilhos / qtdDeFilhos;
	double percentualSalarioMenorQueCem = (pessoasAteCemReais * 100.0) / qtdDeFilhos;
	
	printf("A media dos salarios e: %2.lf\n", mediaSalario);
	printf("A media dos filhos e: %2.lf\n", mediaFilhos);
	printf("O maior salario foi %.2lf\n", maiorSalario);
	printf("A porcentagem de pessoas com o salario de  ate 100 reais e: %.2lf\%\n", percentualSalarioMenorQueCem);
	
	return 0;
}
