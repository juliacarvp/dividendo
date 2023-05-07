#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int dividendo=0, divisor=0, quociente=0, resto=0;

	printf ("Insira um n%cmero: ", 163);
	scanf ("%d", &dividendo);
	
	printf ("Digite seu divisor: ");
	scanf ("%d", &divisor);
	
	resto = dividendo % divisor;
	quociente = dividendo / divisor;
	
	printf ( "\nO dividendo %c: %d", 130, dividendo);
	printf ( "\nO divisor %c: %d", 130, divisor);
	printf ( "\nO quociente %c: %d", 130, quociente);
	printf ( "\nO resto %c: %d \n\n", 130, resto);
	
	system ("pause");
	return (0);
}

