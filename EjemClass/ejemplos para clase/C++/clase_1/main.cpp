#include <iostream>
#include <string>
using namespace std;

/*
promedio formula de la clase:
auxiliar =(faltas * 100)/clases
total = auxiliar - 100
total = porcentaje de clases que fue

 - Act: sacar el portanceja de faltas que tiene cada alumno
 - los datos se tienen que ver en una matriz sin vectores algo asi:
 - | Alumno | Faltas | Porcentaje de faltas |
 - | Santi  | 8      |       80%            |
*/

int main() {
    const int alumnos = 5; // ejemplo 5
    string nombres[alumnos] = {"Santi", "Luna", "Juan", "Ana", "Marta"};
    int faltas[alumnos] = {8, 5, 10, 2, 0};
    int clases;

    cout << "Ingrese cantidad total de clases: ";
    cin >> clases;

    cout << "\n| Alumno       | Faltas | % de faltas |\n";
    cout << "---------------------------------------\n";

    for (int i = 0; i < alumnos; i++) {
        int porcentaje = (faltas[i] * 100) / clases;
        cout << "| " << nombres[i]
             << string(12 - nombres[i].size(), ' ')
             << "| " << faltas[i]
             << string(7, ' ')
             << "| " << porcentaje << "%\n";
    }

    cout << "ingresa alguna tecla para continuar . . . ." << endl;
    system("pause");
    cin >> i;
    return 0;
}
