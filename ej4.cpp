/*Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla
los números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15,
se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.*/

#include <iostream>
using namespace std;

int main (){
	int num1, num2, x, nMin, nMax;
	cout << "Ingresar el primer numero: ";
	cin >> num1;
	cout << "Ingresar el segundo numero: ";
	cin >> num2;
	if(num1 > num2){
        nMax = num1;
        nMin = num2;
	}
	else{
        nMax = num2;
        nMin = num1;
	}
	for ( x = nMin; x <= nMax; x++ ){
        cout << x << endl;
	}

	return 0;
}
