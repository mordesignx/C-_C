#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
    
    int i, j;    
    int arreglo[0]; 
    int rango;
    int busqueda,valor;
    
    cout <<"Introduce un rango de numero: ";
    cin >> rango;
    
    for(i=0; i<rango; i++){
        arreglo[i] = rand() % rango;
        cout <<"\nNumero de arreglo["<<i<<"]"<<" = "<<arreglo[i]<<endl;
                             
    }
    
    int inf, sup, n = rango;
        
    inf = 0;
    sup = n;
            
    cout << "\nIntroduce el numero a Buscar: ";
    cin >> busqueda;
           
    while(inf <= sup){
        i = (inf + sup)/2;
        if(arreglo[i] == busqueda){
            
            cout << "\nEl Numero " <<busqueda<< " ha sido encontrado en la "
                    "posicion del arreglo["<<i<<"]\n"<<endl;
   
            break;
        }
                
        if(arreglo[i]>busqueda){
            sup = i;
            i = (inf+sup)/2;
        }
        if(arreglo[i]<busqueda){
            inf = i;
            i = (inf+sup)/2;
        }
    }
    
    for(i=0; i<rango; i++){
        if(arreglo[i+i] == busqueda)
            return(i);
    }
    
    return 0;
    
}