#include <stdio.h>

int main (void)

{
	int numero1;
	
	int numero2;
	
	int numero3;
	
	int media;
	
	
	printf("calcalando a media aritimetica de 3 numeros\n");
	
	printf("de o valor para o primeiro numero: ");
	scanf("%d",&numero1);
	
	
	printf("de o valor para o segundo numero: ");
	scanf("%d", &numero2);
	
	
	printf("de o valor para o terceiro numero: ");
	scanf ("%d", &numero3);
	
	media= (numero1+numero2+numero3)/3;
	
	printf("media aritimetica = %d\n",media);
	
	printf("logo (%d+%d+%d)/3=%d\n",numero1,numero2,numero3,media);
	
	
	system("pause");
	
	return 0;
	
	
	
}
