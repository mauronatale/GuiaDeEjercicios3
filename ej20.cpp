/*Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
La cantidad de partidos que no jugó (partidos con minutos igual a cero)
La cantidad de partidos que jugó por completo (minutos >= 90)
El promedio de tarjetas recibidas por partido.
El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los
que haya convertido.
*/
#include <iostream>
using namespace std;

int main (){
    int i, partido, tarjetaAmarilla, tarjetaRoja, goles, jugados, completos, noJugados,cantAmarillas,cantRojas,acum1,
    acum2,maxGoles,partidoMax,cantRacha ;
    float minutos, promedio;
    jugados = 0;
    noJugados = 0;
    cantAmarillas = 0;
    cantRojas = 0;
    acum1 = 0;
    acum2 = 0;
    maxGoles = 0;
    partidoMax = 0;
    cantRacha = 0;
    promedio = 0;
    completos = 0;

    for ( i= 0; i<3; i++){
        cout << "Numero de partido: ";
        cin >> partido;
        cout << "Minutos jugados: ";
        cin >> minutos;
        cout << "Tarjetas amarillas: ";
        cin >> tarjetaAmarilla;
        cout << "Tarjetas rojas: ";
        cin >> tarjetaRoja;
        cout << "Goles: ";
        cin >> goles;
        cout << "----------------------" << endl;
        if(minutos == 0){
            noJugados++;
        }
        if(minutos >= 60){
            jugados++;
        }
        if(minutos >= 90){
            completos++;
        }
        acum1 += tarjetaAmarilla;
        acum2 += tarjetaRoja;
        promedio = (float)(acum1 + acum2) / 3;
        if(goles > maxGoles){
            maxGoles = goles;
            partidoMax = partido;
        }

    }
    cout << endl;
    cout << "La cantidad de partidos que jugo por completo son: " << completos << endl;
    cout << "La cantidad de partidos no jugados son: " << noJugados << endl;
    cout << "El promedio de tarjetas es: " <<  promedio << endl;
    cout << "El partido con mas goles es el numero " << partidoMax << " con " << maxGoles << " goles. " << endl;


	return 0;
}
