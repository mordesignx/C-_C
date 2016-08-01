#include <iostream>
#include <fstream>

using namespace std;


int main(){
    
    int outval = 3;
    ofstream WriteFile("myfile.txt");
    WriteFile << outval;
    WriteFile.close();
    
    int inval;
    ifstream ReadFile("myfile.txt");
    ReadFile >> inval;
    
    ReadFile.close();
    
    cout << "El valor escrito es = " << inval << endl;
    
    return 1;
   
}
