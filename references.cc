#include <iostream>
using namespace std;
int main() {
    int a = 1;
    char b('b');
    bool c = {true};
    double d{0.5};
    int& w = a; 
    char& x = b; 
    bool& y = c;
    double& z = d; 
    std::cout << "El entero vale " << w << "." << endl;
    std::cout << "El caracter es " << x << "." << endl;
    std::cout << "La variable de bool es " << y << "." << endl;
    std::cout << "El decimal es " << z << "." << endl;
}
