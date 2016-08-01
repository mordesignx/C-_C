#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int a,b,c;
    cout << "dame el valor de a= ";
    cin >> a;
    
    cout << "dame el valor de b= ";
    cin >> b;
    
    ofstream fp("nombre.dat"); //crea el archivo nombre.dat
    fp << a+b << " ";
    fp << a-b << endl;
    fp.close();
    
    int sum, dif;
    ifstream fr("nombre.dat"); //lee el archivo nombre.dat
    fr >> sum >> dif;
    fr.close();
    
    cout << "la suma es " << sum << endl;
    cout << "la diferencia es " << dif <<endl;
    return 0;
}

