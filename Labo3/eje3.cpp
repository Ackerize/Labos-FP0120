/*
Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te
diga el precio con descuento. 
*/

#include <iostream>

using namespace std;

int main(){
    float precio, descuento, resultado;
    cout << "Ingrese el precio :";
    cin >> precio;
    cout << "Ingrese el descuento :";
    cin >> descuento;

    resultado = precio - (precio*(descuento/100));

    cout << "El precio final con descuento es " << resultado <<  endl;
}