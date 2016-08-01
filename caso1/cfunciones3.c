//ejemplo Recursivo

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

/* función factorial recursiva */
long factorial( int numero )
{                                               
	if ( numero <= 0 ) /* caso base */
		return 1; /* casos bases: 0! = 1 y 1! = 1 */
	else /* llamada recursiva */
		return numero * factorial( numero - 1 ); 
        /* llamada a la función factorial */
}