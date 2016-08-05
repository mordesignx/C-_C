#include <iostream>
using namespace std;

int a_global=1; //variable global

void write_var (int a);

int main(){
    
    int a_local=2; //variable local
    write_var(a_local); //llamada  a la funcion write_var
    return 0;
    
}

void write_var(int a){
    int a_local=3;
    //variable local= 2
    cout <<"el valor de la variable que pasamos es= "<<a<<endl; 
    /*local interna dentro del write_var = 3*/
    cout <<"el valor de la variable local es= "<<a_local<<endl;
    /*variable global = 1*/
    cout <<"el valor de la variable global es= "<<a_global<<endl;
}
