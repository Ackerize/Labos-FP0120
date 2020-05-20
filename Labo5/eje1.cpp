/*
while ( condición_a_evaluar ) { 
   Bloque de Instrucciones    
}; 
*/

//Programa que diga si un número es par o no. Finaliza al pulsar “0”

#include <iostream>

using namespace std;

int main(){
    int n;
    while(n!=0){
        cout << "Ingrese el numero: ";
        cin >> n;
        if(n%2 == 0){
            cout << "Este numero es par.";
        }else{
            cout << "Este numero es impar";
        }
    }
    return 0;
}