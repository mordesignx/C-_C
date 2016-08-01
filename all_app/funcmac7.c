


#include <stdio.h>
#include <stdlib.h>

void usoLocal(void);
void usoStaticLocal(void);
void usoGlobal(void);

int x = 1;

int main(){
    
    int x = 5; /*variable local en main*/
    printf("la x local fuera del calcance de main es %d\n", x);
    
    { /*comienza el nuevo alcance*/
        int x = 7;
        
        printf("la x local en el alcance interno de main es %d\n",x);
    } /*fin de nuevo alcance*/
    
    printf("la x local en el alcance externo de main es %d\n", x);
    
    usoLocal();
    usoStaticLocal();
    usoGlobal();
    usoLocal();
    usoStaticLocal();
    usoGlobal();
    
    printf("\nla x local es main es %d\n", x);
       
    return 0;
    
}

void usoLocal(void){
    int x = 25;
    
    printf("\nla x local en usoLOcal es %d despues de entrar a usoLOcal\n", x);
    x++;
    printf("la x local en usoLocal es %d antes de salir de usoLocal\n", x);
}

void usoStaticLocal(void){
    static int x = 50;
    
    printf("\nla x local estatica es %d al entrar a usoStaticLOcal\n", x);
    x++;
    printf("la x local estatica es %d al salir de usoStaticLocal\n", x);
}

void usoGlobal(void){
    printf("\nla x global es %d al entrar a usoGLobal\n", x);
    x *= 10;
    printf("la x global es %d al salir de usoGLobal\n", x);
}