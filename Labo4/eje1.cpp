//Programa que indica qué numero de los dos introducidos por el usuario es mayor.

#include <iostream>

using namespace std;

int main(){
    int x, y;
    cout << "Ingrese el primero numero: ";
    cin >> x;
    cout << "Ingrese el segundo numero: ";
    cin >> y;

    if(x > y){
        cout << x << " es mayor que " << y << endl;
    }else if (x < y){
        cout << y << " es mayor que " << x << endl;
    }else{
        cout << x << " y " << y << " son iguales" << endl;
    }

    return 0;
}