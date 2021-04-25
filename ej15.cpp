/*Hacer un programa para ingresar un número positivo y calcular e informar si el mismo es un número primo.
Recordar que un número primo es un número natural que tiene exactamente dos divisores.*/

#include <iostream>
using namespace std;

int main (){
	int n, c, i;
	c=0;
	cout << "Ingresar un numero: ";
	cin >> n;
	for (i=1; i<=n; i++){
        if( n%i == 0){
            c++;
        }
	}
	if(c==2){
        cout << "Es un numero primo";
    }
    else{
        cout << "No es un numero primo";
    }

	return 0;
}
