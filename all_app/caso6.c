/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int main(){
    
    int d,e,f,g;
    scanf("%d %d %d %d",&d,&e,&f,&g);
    
    d+= 3; e-= 3; f*= 3; g/= 3; /*operadores de asignacion simplificados
                                 c = c+3; -----> c+=3;*/
       
    printf("La suma es %d\n", d);
    printf("La resta es %d\n", e);
    printf("La multiplicacion es %d\n", f);
    printf("La division es %d\n", g);
    
    return 0;
}

