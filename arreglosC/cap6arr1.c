

#include <stdio.h>

int main(){
    /*int n[10]; /*n es un arreglo de 10 enteros
    int i;
    for (i = 0; i< 10; i++){
        n[i] = 0;
    }
    printf("%s %13s\n", "ELemento", "Valor");
    muestra el contenido del arreglo n en forma tabular
    for(i = 0; i<10; i++){
        printf("%7d%13d\n", i, n[i]);
    }*/
    
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    int i;
    
    printf("%s %13s\n", "Elemento", "Valor");
    
    for (i=0; i<10; i++){
        printf("%7d %13d\n", i, n[i]);
    }
       
    return 0;
}