//ejemplo iterativo
#include <stdio.h>

long factorial(int numero);

int main(int argc, char** argv)
{
	int contador = 0;

	/* calcula el factorial de 0 a 10 */
	for ( contador = 0; contador <= 10; contador++ )
		printf("%d! = %ld\n", contador, factorial( contador ));

	return 0;
}

/* funcion factorial iterativa */
long factorial( int numero )
{
	long resultado = 1;
	int i = 0;

	/* declaracion de la función factorial iterativa */
	for ( i = numero; i >= 1; i-- )
		resultado *= i;

	return resultado;
}