/*
do
{
    Bloque de Instrucciones
}
while(condición de finalización);
*/

//Pedir números hasta que sea mayor a 100


#include <iostream>

using namespace std;

int main(){
    int numero;
    do{
        cout << "Ingrese un numero: ";
        cin >> numero;
    }while(numero <=100);

    return 0;
}