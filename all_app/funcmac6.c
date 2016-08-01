
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Estatus{CONTINUA, GANA, PIERDE};

int tiraDados(void); /*prototipo de la funcion*/

int main(){
    int suma;
    int miPunto;
    
    enum Estatus estatusjuego; /*puede contener continua, gana pierde*/
    
    srand( time (NULL));
    
    suma = tiraDados(); /*primer tiro de los dados*/
    
    switch (suma){
        case 7:
        case 11:
            estatusjuego = GANA;
            break;
        case 2:
        case 3:
        case 12:
            estatusjuego = PIERDE;
            break;
        default:
            estatusjuego = CONTINUA;
            miPunto = suma;
            printf("SU punto es %d\n", miPunto);
            break;
    }
    
    /*mientras el juego no se complete*/
    while(estatusjuego == CONTINUA){
        suma= tiraDados(); /*tira de nuevo los dados*/
        
        if(suma == miPunto){
            estatusjuego = GANA;
        }
        else{
            if(suma == 7 ){
                estatusjuego = PIERDE;
            }
        }
        
    }
    
    /*despliega mensaje de triunfo o derrota*/
    if(estatusjuego == GANA){
        printf("EL jugador gana \n");
    }
    else{
        printf("EL jugador pierde");
    }
    
    return 0;
} /*fin de main*/

/*tiro de dados, calcula la suma y despliega resultados*/

int tiraDados(void){
    
    int dado1;
    int dado2;
    int sumaTemp;
    
    dado1 = 1 + (rand() % 6);
    dado2 = 1 + (rand() % 6);
    sumaTemp = dado1 + dado2;
    
    printf("EL jugador tiro %d + %d = %d\n", dado1, dado2, sumaTemp);
    
    return sumaTemp; /*devuelve la suma de los dados*/
    
} /*fin de la funcion*/



