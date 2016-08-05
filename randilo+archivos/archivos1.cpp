#include <iostream>
#include <fstream>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
    char str[80];
    char str2[80];
    
    cout<<"Escribe en minusculas y despues enter ý escribe en mayusculas"<<endl;
       
    ofstream archivonuevo("dos.txt");
    archivonuevo<<"ingrese una palabra en minuscula: "; gets(str);
    archivonuevo<<str;
    archivonuevo<<"\n LA PALABRA EN MAYUSCULA ES: ";
    
    for(int i=0; str[i]; i++)
        archivonuevo << char(toupper(str[i]));
        
    archivonuevo<<"\n\nINGRESE UNA PALABRA EN MAYUSCULAS: "; gets(str2);
    archivonuevo<<str2;
    archivonuevo<<"\n la palabra en minuscula es: ";
    
    for(int j=0; str2[j]; j++)
        archivonuevo<< char(tolower(str2[j]));
    
    archivonuevo<<"\n\n\n\n\t\tHecho por AntiAnxiety";
     
    archivonuevo.close();
}