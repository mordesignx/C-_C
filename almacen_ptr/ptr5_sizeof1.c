
#include <stdio.h>

size_t obtieneTamanio( float *ptr );

int main(){
    
    float arreglo[ 20 ];
    
    printf("El numero de bytes en el arreglo es %d "
            "\n EL numero de bytes devueltos por obtieneTamanio es: %d\n",
            sizeof( arreglo ), obtieneTamanio( arreglo ));
    
    return 0;
    
}

size_t obtieneTamanio( float *ptr ){
    
    return sizeof( ptr );
    
}