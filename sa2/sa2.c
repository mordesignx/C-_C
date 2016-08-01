
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int buscarNumero(int numero, int arreglo[], int tam);

int main(){
    
    int min, max;
    int num_aleatorio;
    int numeros[TAM] = {1};
    int fstop;
    int d;
    
    printf("\t\t Numero aleatorios \n\n");
    
    printf("Ingrese numero minimo (m): ");
    scanf("%d", &min);
    printf("Ingrese numero maximo (n): ");
    scanf("%d", &max);
    
    srand(time(NULL));
    
    for(d=0; d<TAM; d++){
        
        do{
            num_aleatorio = min + rand()%(max-min+1);
            fstop = buscarNumero(num_aleatorio, numeros, TAM);
        }while(fstop);
        
        numeros[d] = num_aleatorio;
        
        printf("%d ", numeros[d]);
    }
    
    int i, j;
    int n_nodos, long_inte;
    
    printf("\nCuantos nodos a dividir: ");
    scanf("%d", &n_nodos);
    
    int s = long_inte/n_nodos;
    
    for(i=0; i< n_nodos; i++){
        for(j=i;i<long_inte-1+s; j++)
            printf("La usma es:");
        
    }
    
    return (EXIT_SUCCESS);
        
}

int buscarNumero(int numero, int arreglo[], int tam){
    
    int i, stop = 0;
    
    for(i=0; (i<tam && stop == 0); i++){
        if(arreglo[i] == numero)
            stop=1;
    }
    
    return stop;
}
