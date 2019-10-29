#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int a;
    int b;
    int c;
    int c1;
    a = 3;
    b = 4;
    c = 5;
    if(pow(a,2) + pow(b,2) == pow(c,2)){
        cout << "Si";
        cout <<"\n";
    }
    else {
        cout << "no";
    }
    cout << "Con otros valores:";
    cout <<"\n";
        
    c1 = 6;
    if(pow(a,2) + pow(b,2) == pow(c1,2)){
        cout << "Si";
        cout <<"\n";
    }
    else {
        cout << "No";
    }
    return 0;
    
}
