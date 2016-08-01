/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * Activity: Sacar el cuadrado y cubo de un numero
 */

#include <stdio.h>
int main(){
    int x,y,z,a,b,c,d,e;
    printf("introduce un numero: ");
    scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
    
    int x0= x; int x1= x*x; int x2 = x*x*x;  
    int y0= y; int y1= y*y; int y2 = y*y*y;
    int z0= z; int z1= z*z; int z2 = z*z*z;
    int a0= a; int a1= a*a; int a2 = a*a*a;
    int b0= b; int b1= b*b; int b2 = b*b*b;
    int c0= c; int c1= c*c; int c2 = c*c*c;
    
    printf("\nNumero\tCuadrado\tCUbo\n");
    printf("%d\t%d\t\t%d\n",x0,x1,x2);
    printf("%d\t%d\t\t%d\n",y0,y1,y2);
    printf("%d\t%d\t\t%d\n",z0,z1,z2);
    printf("%d\t%d\t\t%d\n",a0,a1,a2);
    printf("%d\t%d\t\t%d\n",b0,b1,b2);
    printf("%d\t%d\t\t%d\n",c0,c1,c2);
   
    
    return 0;
}