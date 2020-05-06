/* Suponiendo que 1 euro = 1.33250 dólares. Escribe un programa que pida al
usuario un número de dólares y calcule el cambio en euros.
*/

#include <iostream>

using namespace std;

int main(){
    int dolares;
    float euros = 1.33250;
    float resultado;
    cin >> dolares;

    resultado = dolares * euros;

    cout << "La conversion de " << dolares << " dolares a euros es: " << resultado << endl;
}