#include <iostream>

using namespace std;

float promedio(int a[], int n);

int main(){
    int n;
    cout << "Ingrese el tamanio del arreglo: "; cin >> n;
    int vector[n];

    //Llenando el array
    for(int i = 0; i < n; i++){
        cout << "Ingrese el dato: "; cin >> vector[i];
    }

    cout << "El promedio es: " << promedio(vector, n);
    return 0;
}

float promedio(int vector[], int n){
    float suma = 0, promedio;
    for(int i = 0; i < n; i++){
        suma += vector[i];
    }
    promedio = suma / n;
    return promedio;
}