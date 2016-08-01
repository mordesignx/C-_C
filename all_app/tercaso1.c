/*
 * sentencia If
 * author: jesromx
 * book: deitel
 */


#include <stdio.h>
int main(){
    int num1, num2;
    
    printf("INtroduzca dos enteros, y le dire \nlas relaciones que satisfacen: ");
    scanf("%d %d", &num1, &num2);
    
    if (num1 == num2){
        printf("%d es igual que %d\n", num1, num2);
    }
    
    if (num1 != num2){
        printf("%d no es igual que %d\n",num1, num2);
    }
    
    if (num1 < num2){
        printf("%d es menor que %d\n", num1, num2);
    }
    
    if (num1 > num2){
        printf("%d es mayor que %d\n", num1, num2);
    }
    
    if (num1 <= num2){
        printf("%d es menor o igual que %d\n", num1, num2);
    }
    
    if (num1 >= num2){
        printf("%d es mayor o igual que %d\n", num1, num2);
    }
        
    return 0;
    
}
