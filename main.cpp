//Rodrigo Lobos Leal 
//Ayudantia Computacion Paralela y Distribuida

#include <iostream> //cout

#include "Funciones.h"

using namespace std;

int main(int argc, char** argv) {
    
    //arreglo de enteros.
    int enteros[100000];

    //Funcion que ingresa numeros random al arreglo
    NumerosRandom(enteros);
    
    
    //Funcion que calcula el promedio del arreglo de numeros
    float promed = Promedio(enteros);
    cout <<"Promedio: "<< promed <<endl;
    
    
    //Funcion que calcula la varianza del arreglo de numeros
    float varian = Varianza(enteros,promed);
    cout.precision(10);
    cout <<"Varianza: "<< varian <<endl;
   
    
    //Funcion que calcula la Desviacion Estandar del arreglo de numeros
    float estandar = DesvEstandar(varian);
    cout <<"Desviacion Estandar: "<< estandar <<endl;
    
    
    
    return 0;
}

