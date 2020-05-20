/*

for(int i = valor inicial; i <= valor final; i = i + paso)
{
    Bloque de Instrucciones
}

*/

// Programa que calcule la tabla de multiplicacion de un numero dado

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese la tabla a calcular: ";
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << n << "*" << i << "=" << (n*i) << endl;
    }
    return 0;
}