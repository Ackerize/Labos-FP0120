//Programa que calcule el área de un triángulo.

#include <iostream>

using namespace std;

int main(){
    int base, altura;
    float area;
    cout << "Ingrese la base del triangulo :";
    cin >> base;
    cout << "Ingrese la altura del triangulo :";
    cin >> altura;

    area = (base*altura)/2;

    cout << "El area del triangulo es " << area <<  endl;
}