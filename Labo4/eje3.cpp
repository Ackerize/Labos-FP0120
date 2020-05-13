//Programa que dice si un numero es par o impar

#include <iostream>

using namespace std;

int main(){
    int x;
    cout << "Ingrese el numero: ";
    cin >> x;


    if(x%2 == 0){
        cout << x << " es par"<< endl;
    }else{
        cout << x << " es impar" << endl;
    }

    return 0;
}