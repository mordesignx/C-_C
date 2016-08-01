/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <fstream>
#define MAX_SIZE 25
using namespace std;

void report_error(void);
int report_final(int dimen, int matriz[]);

int main(){
    
    int size;
    int Matriz [MAX_SIZE];
    
    cout << "Introduzca la dimension del vector"<<endl;
    cin >> size;
    if(size > MAX_SIZE) report_error();
    
    for(int i=0; i<size; i++)
        Matriz[i]=0;
    
    if(report_final(size, Matriz)){
        cout << "Vamos a trabajar con un vector de " <<size
             << "componentes" <<endl;
    }else 
        cerr << "error general" <<endl;
    
    return 0;
}

void report_error(void){
    ofstream MyReport("resultados2.txt");
    cerr << "Error, tamaño demasiado grande"<<endl;
    MyReport << "************** INicio *******************"<< endl;
    MyReport << " ERROR: dimension del vector debe ser menor de "
             << MAX_SIZE <<endl;
    MyReport << " ************* FIn **********************"<<endl;
    MyReport.close();
    return;
}

int report_final (int dimension, int matriz[]){
    ofstream MyReport("resultados2.txt");
    MyReport << " ************* Inicio ********************" <<endl;
    MyReport << " Vector de " << dimension << " componentes " << endl;
    int i=0;
    do{
        MyReport << matriz[i] << " ";
    } while(++i<dimension);
    
    MyReport << endl;
    MyReport << "****************** Fin " <<endl;
    MyReport.close();
    return 1;
}