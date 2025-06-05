#include <stdio.h>
#include <string.h>
int main()
{
	int idade;
	double salario, altura;
	
	
	printf("Informe a idade :");
	scanf("%d", &idade);
	
	printf("Informe o valor do salario :");
	scanf("%lf", &salario);
	
	printf("Informe a altura : ");
	scanf("%lf", &altura);
	
	printf("Idade : %d\n", idade);
    printf("Altura : %.2lf\n", altura);
    printf("Salario : %.2lf\n", salario);


	return 0;
}