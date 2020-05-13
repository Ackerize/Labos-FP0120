//Programa que dice que si un numero es positivo o negativo
//usando operador ternario

#include <iostream>

using namespace std;

int main(){
    int x;
    string respuesta;
    cout << "Ingrese el numero: ";
    cin >> x;

    respuesta = x >= 0 ? "positivo" : "negativo";

    cout << x << " es "  << respuesta;

    return 0;
}