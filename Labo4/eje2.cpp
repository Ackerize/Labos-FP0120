//Programa que determina el promedio de tres notas y determina si el estudiante aprobó o no.

#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, promedio;
    cout << "Ingrese la primera nota: ";
    cin >> n1;
    cout << "Ingrese la segunda nota: ";
    cin >> n2;
    cout << "Ingrese la tercer nota: ";
    cin >> n3;

    promedio = (n1+n2+n3)/3.0;

    if(promedio >= 6.0){
        cout << "Ha aprobado la materia con " << promedio;
    }else{
        cout << "Ha reprobado la materia con " << promedio;
    }

    return 0;
}