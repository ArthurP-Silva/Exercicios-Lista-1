#include <stdio.h>


int main (void)


{

	int horas;
	int minutos;
	int segundos;
	
	
	printf("que horas sao: ");
	scanf("%d", &horas);
	
	minutos = horas*60;
	
	printf ("em minutos sao:%d \n",minutos);
	
	segundos = horas*3600;
	
	printf ("em segundos sao: %d \n",segundos);
	
	
	
	
	printf ("entao %d horas = %d minutos = %d segundos\n",horas,minutos,segundos);
	
	
	
	system ("pause");
	
	return 0;
	
	
}
