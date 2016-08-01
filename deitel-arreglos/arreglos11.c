
#include <stdio.h>
#include <stdlib.h>

char *gets(char *var);
//int puts(const char *var);

int main(){
    
    int entero;
    double real;
    char respuesta = 's', cadena[81];
    
    //introducir numeros
    printf("INtroducir un n° entero y un n° real: \n");
    scanf("%d %lf", &entero, &real);
    printf("%d + %f = %f\n\n", entero, real, entero + real);
    
    //limpiar el buffer de entrada y leer una cadena con gets
    fflush(stdin); //o bien gets(cadena)
    
    printf("INtroducir cadenas para gets.\n");
    while ( respuesta == 's' && gets(cadena) != NULL){
        printf("%s\n",cadena);
        do{
            printf("¿Desea continuar? (s/n) ");
            respuesta = getchar();
        
            //limpiar el buffer de entrada
            fflush(stdin);
        }
        while((respuesta != 's') && (respuesta != 'n'));
    }

}

