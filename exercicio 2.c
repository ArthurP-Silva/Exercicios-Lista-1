#include <stdio.h>

int main (void)

{
	int raio;
	float area;
	
	
	
	printf("informe o valor do raio do circulo:");
	scanf("%d",&raio);
	
	area=raio*raio*3.14;
	
	printf("o valor da area desse circulo = %.2f \n",area);
	
	
	printf("logo um circulo com raio = %d tem a area = %.2f\n",raio,area);

	system ("pause");
	
	return 0;
		
	
	
	
}
