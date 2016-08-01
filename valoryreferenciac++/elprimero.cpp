
#include <iostream>
using namespace std;

int main(){

    int suma=0;
    int cantidad;
    int num, i;

    cout << "Ingrese cantidad de numeros que desea sumar: ";
    cin>>cantidad;
    
    for(i=1;i<=cantidad;i++){
        cout<<"Ingrese numero "<<i<<": ";
        cin>>num;
        suma=suma+num;
    }
    cout<<"la suma es:"<<suma <<" = "<<suma <<endl;
} 