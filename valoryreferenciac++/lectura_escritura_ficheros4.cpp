#include <iostream>
#include <fstream>
using namespace std;

#define MAX_SIZE 25

int main(){
    int size;
    ofstream MyReport("Resultado.txt");
    cout << "introduzca la dimension del vector"<<endl;
    cin >> size;
    if(size > MAX_SIZE){
        cerr << "Error, tamaño demasiado grande" <<endl;
        MyReport << "********++++++**** inicio" <<endl;
        MyReport << "ERROR: dimension del vector debe ser emnor de"
                 << MAX_SIZE << endl;
        MyReport << "******************** fin" <<endl;
        MyReport.close();
        return 1;
    }
    
    cout << "Vamos a trabajr con un vector de " << size <<"componentes"<<endl;
    
    MyReport <<"************* inicio" <<endl;
    MyReport <<"Vector de " <<size<<"componentes"<<endl;
    MyReport <<"********* fin" << endl;
    MyReport.close();
    
    return 0;
}

