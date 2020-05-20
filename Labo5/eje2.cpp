/*

for(int i = valor inicial; i <= valor final; i = i + paso)
{
    Bloque de Instrucciones
}

*/

// Programa que muestre los numeros desde 1 hasta n

#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese el valor: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
    return 0;
}