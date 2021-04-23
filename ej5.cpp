/*Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista
y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos*/

#include <iostream>
using namespace std;

int main (){
    int n, lista, x, cont;
    cout << "Ingresar la cantidad de numeros que compone la lista: ";
    cin >> lista;
    cont=0;
    for (x = 0; x < lista; x++){
        cout << "Ingresar los numeros de la lista: ";
        cin >> n;
    if(n>0){
            cont++;

        }
    }
    cout << "Positivos: " << cont << endl;


	return 0;
}
