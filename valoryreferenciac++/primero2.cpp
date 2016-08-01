/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
using namespace std;

int main(){
    
    int a;
    int &r = a;
    
    a = 10;
    
    cout << r <<endl;
    
    return 0;
    
}