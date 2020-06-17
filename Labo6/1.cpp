#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese el tamanio del arreglo: "; cin >> n;
    int vector[n];

    //Llenando el array
    for(int i = 0; i < n; i++){
        cout << "Ingrese el dato: "; cin >> vector[i];
    }

    cout << "Array: [ ";

    //Mostrando el array
    for(int i = 0; i < n; i++){
        cout <<  vector[i] << " ";
    }
    cout << "]";
    return 0;
}