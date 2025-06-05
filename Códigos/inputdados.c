#include <stdio.h>
#include <string.h>
int main()
{
	int idade;
	double salario, altura;
    char nome[50];
	
	
	printf("Informe a idade :");
	scanf("%d", &idade);
	
	printf("Informe o valor do salario :");
	scanf("%lf", &salario);
	
	printf("Informe a altura : ");
	scanf("%lf", &altura);

    	printf("Informe o nome : ");
    	scanf("%s\n", nome); // somente para nome continuo, sem espaços. Não se usa o & antes da variável nome, pois ela já é um ponteiro para o primeiro elemento do array.
	
	printf("Idade : %d\n", idade);
    	printf("Altura : %.2lf\n", altura);
    	printf("Salario : %.2lf\n", salario);


	return 0;
}
