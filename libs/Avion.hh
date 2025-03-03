#ifndef AVION_H
#define AVION_H
#include "Vuelo.hh"
#include "Compania.hh"
#include <string>
#include <sstream>

using namespace std;
// Include any necessary libraries here


struct Avion {

    string nombreEmpresa;
    string codigo;
    int numeroAsientos;
    int numeroVuelos;
    Vuelo* vuelos;
};


#endif // AVION_H