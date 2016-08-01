
#include <stdio.h>

int main(){
    
    int n[10] = {10,11,34,56,43,9,15,16,90,88}; //n es un arreglo de 10 enteros
    int i; //contador
    
    printf("%s %13s\n ", "ELemento", "Valor");
    
    for(i=0; i<10; i++){
        printf("%7d %13d\n", i, n[i]);
    }
    
    return 0;
    
}