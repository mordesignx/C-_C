/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int cal;
    
    printf("introduce calificacion: ");
    scanf("%d" , &cal);
    
    if(cal >= 90){
        printf("Tienes una A\n Excelente has aprobado\n");
    }
    else if(cal >= 80){
        printf("TIenes una B\n");
    }
    else if(cal >= 70){
        printf("Tienes una C\n");
    }
    else if(cal >= 60){
        printf("Tienes una D\n");
    }
    else
        printf("TIenes una F\n HaZ Reprobado\n");
        
    return 0;
}