#ifndef COMPANIA_H
#define COMPANIA_H
#include "Avion.hh"
#include "Vuelo.hh"
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

struct Compania {
    int numeroAviones;
    Avion* aviones;

    Compania() {
        numeroAviones = 0;
        aviones = nullptr;
    }
};

//Punto 2: Agregar un avión a la compañía
//Desarrollar una función que permita agregar un avión a la compañía, 
//en la que se envíe como parámetro la compañía por referencia y el avión a agregar por valor. 

void agregarAvion(Compania &compania, Avion avion) {
    
}

// Punto 3 : Buscar un avión por código
// Desarrollar una función que, dado el código de un avión, lo busque en el arreglo de aviones de la compañía
// y lo retorne por referencia. Si el avión no se encuentra, debe retornar nullptr.
Avion* buscarAvionPorCodigo(Compania& compania, string codigoABuscar) {
   return nullptr;
}
/*
    Punto 4: Agregar un vuelo a un avión
    Desarrollar una función que, a partir de una cadena de caracteres con la línea del vuelo 
    en el archivo de texto, busque el avión con el método buscar y agregue el vuelo 
    al arreglo de vuelos del avión.
*/
void agregarVueloAAvion(Compania& compania, string lineaVuelo) {
    
}

/*
    Punto 5: Leer el archivo de texto:
    Desarrollar una función que lea el archivo de texto llamado vuelos.txt, 
    utilizando los métodos anteriores.
*/

Compania leerArchivo() {
    Compania compania;

    fstream file;

    file.open("vuelos.txt", ios::in);

    if (file.fail()) {
        return compania;
    }
    
    file.close();

    return compania;

}

/*
    Punto 6 Generar reporte de vuelos por ciudad de origen:
    Dada una cadena de caracteres, buscar los vvuelos cuyo otigen coincida con dicha cadena.
    Si se encuentran vuelos, generar un archivo de texto llamado vuelosOrigen.txt y un archivo binario
    llamado vuelosOrigen.dat con la información de los vuelos.
*/

void generarReporte(Compania& compania, string ciudadOrigen) {
    fstream file;
    file.open("vuelosOrigen.txt", ios::out);
    fstream fileBin;
    fileBin.open("vuelosOrigen.dat", ios::out | ios::binary);


    file.close();
    fileBin.close();
}

#endif // COMPANIA_H