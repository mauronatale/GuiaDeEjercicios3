/*Hacer un programa para ingresar un n�mero y luego informar todos los divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo 2. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.*/

#include <iostream>
using namespace std;

int main (){
	int n, i, c = 0;
	cout << "Ingresar un numero: ";
    cin >> n;
    cout << "Sus divisores son: " << endl;
	for(i=1; i<=n; i++){
        if(n%i==0){
            cout << i << endl;
            c++;

        }
	}

	return 0;
}
