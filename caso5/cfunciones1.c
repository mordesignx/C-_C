/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

#define INF -30
#define SUP 100

float convertir (int c); /*prototipo de la funcion a convertir*/

int main(){
    
    /*declaracion de variables locales*/
    int nGradosCentigrados = 0;
    int incremento = 6; /*iniciar con el incremento a 6*/
    float GradosFahrenheit = 0;
    
    nGradosCentigrados = INF;
    while (nGradosCentigrados <= SUP){
        GradosFahrenheit = convertir(nGradosCentigrados);
        printf("%10d C %10.2f F\n", nGradosCentigrados, GradosFahrenheit);
        
        nGradosCentigrados += incremento;
                
    }

    return 0;
} /*FIn de la funcion Main*/

/*********** DEFINICION DE LA FUNCION A CONVERTIR ***************/

float convertir (int gcent){
    
    float gfahr;
    
    gfahr = (float)9 / (float)5 * gcent + 32;
    
    return (gfahr); /*valor que retorna la funcion convertir*/
    
} /*fin de la funcion convertir*/