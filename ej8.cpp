/*Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo*/

#include <iostream>
using namespace std;

int main (){
	int legajo, x;
	float sueldo, sueldoMax,legajoMax;
	for ( x = 0; x < 10; x++ ){
        cout << "Ingresar legajo: ";
        cin >> legajo;
        cout << "Ingresar sueldo: ";
        cin >> sueldo;
        if ( x == 0 ){
            sueldoMax = sueldo;
            legajoMax = legajo;
        }
    }
cout << "El legajo con mayor sueldo es : " << legajoMax << endl;
	return 0;
}
