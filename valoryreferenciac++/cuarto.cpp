#include <iostream>
using namespace std;


int main(){
    double a,b,Area;
    int figura;
    
    cout <<"figura= rectangulo(1), triangulo(2)"<<endl;
    cout <<"¡que area quieres calcular?"<<endl; 
    
    
    
    switch(figura){
        case 1:
            cout <<"valor del lado menor ="; cin >> a;
            cout <<"valor del lado mayor ="; cin >> b;
            Area=a*b;
            break;
        
        case 2:
            cout <<"valor de la base = "; cin >>a;
            cout <<"valor de la altura ="; cin >>b;
            Area=(a*b)/2;
            break;
        
        default:
            cout <<"figura equivocada"<<endl;
            Area = 0;
            break;  
    }
    if(Area){
        cout<<"El area de la figura es= "<<Area<<endl;
    }else
        cerr <<"error, la figura no tiene area"<<endl;
    
    return 0;
}