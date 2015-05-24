#include <cstdlib>
#include <iostream>

/* Trabajp Practico N7 

REQUISITO:
Ingresado 3 medidas por el Usuario verificar si puede formar o no un Triangulo.

Determinar que tipo de triangulo puede ser: Equilátero, Isósceles o Escaleno.

MATERIA:
Algoritmo y Estructura de Datos

INTEGRANTES:
Martin AGUEL
Adriel CHAMBI
Federico BUSTAMANTE
Augusto SCHMID
*/

using namespace std;

int main(int argc, char *argv[])
{
    //desde AdrielChambi
    int a,b,c;
    cout<<"Iniciando";
	
    //desde Auguschmid
    cout<<"Ingrese tres longitudes"<<endl;
    cin >> a >> b >> c ;
	
    //desde AdrielChambi
    cout<<"Volviendo a modificar";
	
    //Pruebas con ENUM:
	
    //Creacion del Tipo de Dato:
    enum TipoFigura {
	Circulo,
	Cuadrado,
	Rectangulo
    };
	
    //Utilizacion de la Variable
	
    TipoFigura Figura;
    Figura = Cuadrado;
	
    if (Figura == Cuadrado) {
	cout<<endl<<"La figura es un Cuadrado"<<endl;
    }
}
