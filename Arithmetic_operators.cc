#include <iostream>
using namespace std;

int main() {
    
    int a{1};
    float b{0.5};
    
    std::cout << "El entero vale " << a << "." << endl;
    std::cout << "El decimal vale " << b << "." << endl;

    std::cout << "El resultado de operar 1 + 0.5 es " << a + b << endl;
    std::cout << "El resultado de operar 1 - 0.5 es " << a - b << endl;
    std::cout << "El resultado de operar 1 * 0.5 es " << a * b << endl;
    std::cout << "El resultado de operar 1 / 0.5 es " << a / b << endl;

    
    if (a < b) {
    std::cout << "El enunciado 1 < 0.5 es verdadero" << endl;
    } else {
    std::cout << "El enunciado 1 < 0.5 es falso" << endl;
    }

    
    
    if (a > b) {
        std::cout << "El enunciado 1 > 0.5 es verdadero" << endl;
    } else
    {
        std::cout << "El enunciado 1 > 0.5 es falso" << endl;
    }
    


    if (b < a) {
    std::cout << "El enunciado 0.5 < 1 es verdadero" << endl;
    } else {
    std::cout << "El enunciado 0.5 < 1 es falso" << endl; 
    }

    
   
   if (b > a) {
        std::cout << "El enunciado 0.5 > 1 es verdadero" << endl;
    } else {
        std::cout << "El enunciado 0.5 > 1 es falso" << endl;
    }

    
   
   if (a == b) {
        std:: cout << "El enunciado 1==0.5 es cierto ";
    } else {
        std::cout << "El enunciado 1==0.5 es falso" << endl;
    }
    return 0;

}
