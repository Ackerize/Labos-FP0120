#include <iostream>
#include <math.h>

using namespace std;

float promedio(float a[], int n);
float incerteza(float a[], int n);

int main(){
    int n;
    cout << "Ingrese el tamanio del arreglo: "; cin >> n;
    float vector[n];

    //Llenando el array
    for(int i = 0; i < n; i++){
        cout << "Ingrese el dato: "; cin >> vector[i];
    }
    cout << "El valor de la incerteza: " << incerteza(vector, n) << endl;

    return 0;
}

float promedio(float vector[], int n){
    float suma = 0, promedio;
    for(int i = 0; i < n; i++){
        suma += vector[i];
    }
    promedio = suma / n;
    return promedio;
}

float incerteza(float vector[], int n){
    float suma = 0, resta, prom = promedio(vector, n), resultado;
    for(int i = 0; i < n; i++){
        resta  = vector[i] - prom;
        suma += pow((resta), 2);
    }
    resultado = suma / (n - 1);
    return resultado;
}