/*Hacer un programa para ingresar 5 n�meros, luego informar los 2 mayores valores ingresados,
aclarando cual es el m�ximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado ser� 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado ser� 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado ser� -2 y -4*/

#include <iostream>
using namespace std;

int main (){
    int i, n , resto, pri, seg;
    n=pri=seg=0;
    for (i=1; i<=5; i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        if(n > pri){
            seg = pri;
            pri = n;
        }
        else{
            if(n <= pri){
                if(n > seg){
                    seg = n;
                }
            }
        }
    }
	cout << "El primer mayor es: " << pri << endl;
	cout << "El segundo mayor es: " << seg << endl;
	return 0;
}
