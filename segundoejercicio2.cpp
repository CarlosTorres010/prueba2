/*Generador de N�meros Aleatorios: Crea un programa que genere y muestre una serie de n�meros aleatorios entre 0 y un 
n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario la cantidad de n�meros aleatorios que desea
generar y el valor m�ximo permitido. Utiliza la funci�n rand de la librer�a cstdlib para generar los n�meros aleatorios.*/

#include<iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;   

int main() {
    srand(time(0));

    int cantidad, maximo;

    cout << "Introduce la cantidad de n�meros aleatorios a generar: "; cin >> cantidad;
 
    cout << "Introduce el valor m�ximo permitido para los n�meros aleatorios: "; cin >> maximo;

    cout << "N�meros aleatorios generados:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = rand() % (maximo + 1); 
        cout << numeroAleatorio << " ";
    }
    cout << endl;

    return 0;
}
