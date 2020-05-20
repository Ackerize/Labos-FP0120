/*
while ( condición_a_evaluar ) { 
   Bloque de Instrucciones    
}; 
*/

//Factorial de n = n*(n-1)*(n-2)*(n-3)...

/* Ejemplo Factorial de 5:
    5! = 5*4*3*2*1 = 120
*/

//Programa que calcule el factorial de un numero

#include <iostream>

using namespace std;

int main(){
    int n, factorial = 1;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(n > 0){
        factorial *= n;
        n--;
    }

    cout << "El factorial es: " << factorial << endl;
    return 0;
}