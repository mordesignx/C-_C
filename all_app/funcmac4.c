/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int frecuencia1=0;
    int frecuencia2=0;
    int frecuencia3=0;
    int frecuencia4=0;
    int frecuencia5=0;
    int frecuencia6=0;
    
    int tiro;
    int cara;
    
    for (tiro = 1; tiro <= 6000; tiro ++){
        cara = 1+ rand() %6; /*numero aleatorio de 1 a 6*/
        
        /*determina el valor de cara e incrementa el contador apropiado*/
        switch(cara){
            case 1:
                ++frecuencia1;
                break;
            case 2:
                ++frecuencia2;
                break;
            case 3:
                ++frecuencia3;
                break;
            case 4:
                ++frecuencia4;
                break;
            case 5:
                ++frecuencia5;
                break;
            case 6:
                ++frecuencia6;
                break;
        } /*fin de switch*/
        
    } /*fin de for*/
    
    printf("%s %13s\n", "Cara", "Frecuencia");
    printf("    1%13d\n", frecuencia1);
    printf("    2%13d\n", frecuencia2);
    printf("    3%13d\n", frecuencia3);
    printf("    4%13d\n", frecuencia4);
    printf("    5%13d\n", frecuencia5);
    printf("    6%13d\n", frecuencia6);
    
    return 0;
}
