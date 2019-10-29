#include <iostream>

using namespace std;

int main(){
    double n;
    double Pi = 3.14159265359;
    cout << "Ingrese el valr del radio del círculo: ";
    cin >> n;
    
    cout << "El perimetro es: " << 2*Pi*n;
    cout << "\n"
    cout << "El área es: "<< Pi*n*n;
    cout << "\n"
    cout << "El diametro es: "<< 2*n<<endl;
}
