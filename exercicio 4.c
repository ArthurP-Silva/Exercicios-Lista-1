#include <stdio.h>

int main (void)

{
	
	
	int numero1;
	
	int numero2;
	
	int resultado;

    int resto;
    
	
	printf("atribua um valor ao dividendo: ");
	scanf("%d",&numero1);
	
	
	printf("atribua valor ao divisor: ");
	scanf("%d", &numero2);
	
	
	resultado=numero1/numero2;
	
	resto = numero1%numero2;
	
	printf("resultado da divisao = %d\n",resultado);
	
	printf("resto da divisao = %d\n",resto);
	
	system("pause");
	
	return 0;
	
	
	
}
