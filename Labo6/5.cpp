#include <iostream>

using namespace std;

void imprimir(int a[]);

int main(){
    int contador = 1;
    int vector[100];

    //Llenando el array
    for(int i = 0; i < 100; i++){
        vector[i] = contador;
        contador += 2;
    }
    imprimir(vector);
    return 0;
}

void imprimir(int vector[]){
    cout << "Imprimiendo de forma descendente" << endl;
    for(int i = 99; i >= 0; i--){
        cout << vector[i] << endl;
    }
}