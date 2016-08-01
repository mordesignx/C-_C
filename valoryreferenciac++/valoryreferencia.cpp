#include <iostream>
using namespace std;

int cuadradoPorValor(int a);
void cuadradoPorReferencia(int &cRef);

int main(){
    
    int x = 2, z=4;
    cout    << "x= " << x << " antes de cuadradoPorValor\n"
            << "Valor devuelto por cuadradoPorValor: "
            << cuadradoPorValor(x) << endl
            << "x= " << x << " despues de cuadradoPórValor\n" << endl;
    
    cout    << "z= " << z << " despues de cuadradoPorRefenecia" << endl;
    cuadradoPorReferencia(z);
    cout    << "z= " << z << " despues de cuadradoPorReferencia" <<endl;
    
    return 0;
}

int cuadradoPorValor(int a){
    return a*=a; //argumento de la llamada no modificada
}

void cuadradoPorReferencia(int &cRef){
    cRef *= cRef; //argumento de la llamada modificada
}