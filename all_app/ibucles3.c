/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int total, contador, cal;
    
    float promedio; /*numero con punto decimal*/
    
    /*fase de inicializacion*/
    total = 0;
    contador = 0;
    
    /*fase de procesamiento*/
    printf("INtroduzca la calificacion, -1 para terminar: ");
    scanf("%d", &cal);
    
    /*repite el ciclo mientras no se introduzca el valor centinela*/
    while(cal != -1){
        total= total + cal;
        contador= contador+1;
        
        printf("Introduzca la calificacion, -1 para terminar: ");
        scanf("%d", &cal);  
    } /*fin de while*/
    
    /*fase de terminacion*/
    /*si el usuario introdujo al menos una calificacion*/
    if(contador !=0 ){
        promedio = (float) total/contador;
        
        /*despliega el promedio con dos digitos de precision*/
        printf("EL promedio del grupo es: %.2f\n", promedio);
        printf("EL promedio del grupo es: %.1f\n", promedio);
       
    }/*fin de if*/
    else{
        printf("No se introdujeron calificaciones\n");
    } /*fin de else*/
    
    return 0;
}
