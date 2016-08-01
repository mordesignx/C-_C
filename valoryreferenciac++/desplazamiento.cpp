
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    
    int b[] = {10, 20, 30, 40 };
    int *ptrB = b;
    
    int i;
    int desplazamiento;
    
    cout << "Arreglo b impreso con: \nNotacion de subindices de arreglos\n"<<endl;
    
    for(i=0; i<4; i++){
        cout << "b ["<<i<<"] = "<<b[i]<<endl;
    }
    
    cout << "\nNotacion apuntador/desplazamiento donde \n el apuntador es"
            " el nombre del arreglo\n";
    
    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        cout <<"*(b+["<< desplazamiento<<"]) = " <<*(b+desplazamiento)<<endl;
    }
    
    cout << "\nNotacion de subindices de arreglos\n";
    
    for(i=0; i<4; i++){
        cout << "Ptrb ["<<i<<"] = "<<ptrB[i]<<endl;
    }
    
    cout <<"\nNotacion apuntador desplazamiento\n";
    
    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        cout <<"*(ptrB+"<<desplazamiento<<") = "<<*(ptrB+desplazamiento)<<endl;
    }
    
    return 0;
}