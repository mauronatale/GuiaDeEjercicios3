/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.*/

#include <iostream>
using namespace std;

int main (){
	int x, cont;
    float sueldoMax, sueldoMin, acum, sueldo;
	acum = 0;
	cont = 0;
	for ( x = 0; x < 10 ; x++){
        cout << "Ingresar el sueldo: ";
        cin >> sueldo;
        acum += sueldo;
        if ( x == 0 ){
            sueldoMax = sueldo;
            sueldoMin = sueldo;
        }
        if ( sueldo > sueldoMax){
            sueldoMax = sueldo;
        }
        if ( sueldo < sueldoMin){
            sueldoMin = sueldo;
        }
        if ( sueldo > 50000){
            cont++;
        }

	}

    cout << "Sueldo maximo: " << sueldoMax << endl;
	cout << "Sueldo minimo: " << sueldoMin << endl;
	cout << "Sueldo promedio: " << acum/10 << endl;
	cout << "Sueldo mayores a 50.000: " << cont << endl;


	return 0;
}
