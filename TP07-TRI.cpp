#include <cstdlib>
#include <iostream>

/* Trabajp Practico N7 

REQUISITO:
Ingresado 3 medidas por el Usuario verificar si puede formar o no un Triangulo.

Determinar que tipo de triangulo puede ser: Equilatero, Isoseles o Escaleno.

MATERIA:
Algoritmo y Estructura de Datos

INTEGRANTES:
Martin AGUEL
Adriel CHAMBI
Federico BUSTAMANTE
Augusto SCHMID
*/

using namespace std;

bool esEquilatero(int, int, int);

bool esIsosceles(int, int, int);

bool esEscaleno(int, int, int);

int main(int argc, char *argv[])
{
    cout<<"Iniciando";
}

bool esEquilatero(int x, int y, int z){
	return (x == y and y == z);
}

bool esIsosceles(int x, int y, int z){
	return ( ((x==y) and (x!=z)) or ((x==z) and (z!=y)) or ((y==z) and (z!=x)) );
}

bool esEscaleno(int x, int y, int z){
	return (x!=y and y!=z and z!=x);
}