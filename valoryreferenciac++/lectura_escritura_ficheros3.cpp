#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int size;
    
    cout << "introduzca la dimension del vector"<<endl;
    cin >> size;
    cout << "vamos a trabajar con un vector de " << size<< " componentes"<<endl;
    
    ofstream MyReport("resultado.txt"); //crear archivo txt
    MyReport << "********************* inicio" <<endl;
    MyReport << "Vector de " <<size<< " componentes" <<endl;
    MyReport << "************************* fin"<<endl;
    MyReport.close(); //cerrar el archivo creado
    
    return 0;
}

