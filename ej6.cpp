/*Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos,
cuántos son negativos, y cuántos iguales a cero.*/

#include <iostream>
using namespace std;

int main (){
	int n, positivos, negativos, cero, x;
	positivos = 0;
	negativos = 0;
	cero = 0;
	for ( x = 0; x < 10; x++){
        cout << "Ingresar 10 numeros: ";
        cin >> n;
        if( n > 0 && n != 0){
            positivos++;
        }
        else{
           if ( n < 0 && n !=0){
            negativos++;
        }
        else{
                cero++;
            }
        }


	}

    cout << "Son Positivos: " << positivos << endl;
    cout << "Son negativos: " << negativos << endl;
    cout << "Son igual a cero: " << cero << endl;


	return 0;
}
