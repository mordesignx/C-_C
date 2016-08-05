
#include <iostream>
#include <cstdio>
using namespace std;

void swap(int *x, int*y);
void swap(float *x, float *y);

int main(){
    char c;
    cout<<"intercambia numeros enteros o reales(e/r) ";
    cin>>c;
    switch(c){
        case 'e':{
            int a,b, *pa, *pb;
            pa=&a; pb=&b;
            cout<<"ingrese a y b: "; cin>>a; cin>>b;
            swap(pa, pb);
            cout<<"ahora a y b son: "<<a<<" y "<<b;
            break;
        }
        case 'r':{
            float a,b, *pa, *pb;
            pa=&a; pb=&b;
            cout<<"ingrese a y b: "; cin>>a; cin>>b;
            swap(pa, pb);
            cout<<"ahora a y b son:"<<a<<" y "<<b;
            break;
        }
        default:
            cout<<"changos me equivoque";
            break;
    }
}

void swap(int *x, int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void swap(float *x, float *y){
    float temp;
    
    temp=*x;
    *x=*y;
    *y=temp;
}