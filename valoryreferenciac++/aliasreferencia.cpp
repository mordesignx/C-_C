#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    ofstream archivonuevo("archivo23.txt");
    
    int x = 3, &y = x;
    
    archivonuevo << "x = "<< x << endl << "y = " << y << endl;
    y = 7;
    archivonuevo << "x = " << x << endl << "y = " << y << endl;
    archivonuevo.close();
    
    return 0;
    
}