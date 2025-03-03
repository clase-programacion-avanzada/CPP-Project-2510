#include <iostream>
#include "libs/Compania.hh"

void agregarAvion(Compania& compania);
void agregarVuelo(Compania& compania);
void generarReporte(Compania& compania);
void mostrarMenu();
Compania cargarDatosDePrueba();
void imprimirCompania(Compania& compania);

using namespace std;

int main() {
    Compania compania;
    

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 0: 
                compania = cargarDatosDePrueba();
                break;
            case 1:
                agregarAvion(compania);
                break;
            case 2:
                agregarVuelo(compania);
                break;
            case 3:
                compania = leerArchivo();
                break;
            case 4:
                generarReporte(compania);
                break;
            case 5:
                imprimirCompania(compania);
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    } while (opcion != 6);

    return 0;
}

void mostrarMenu() {
    cout << "=== Menú de Gestión de Reservas ===" << endl;
    cout << "0. Cargar datos de prueba" << endl;
    cout << "1. Agregar un avión" << endl;
    cout << "2. Agregar un vuelo" << endl;
    cout << "3. Leer archivo de vuelos" << endl;
    cout << "4. Generar reporte de vuelos por ciudad de origen" << endl;
    cout << "5. Imprimir compañía" << endl;
    cout << "6. Salir" << endl;
    cout << "Seleccione una opción: ";
}

void agregarAvion(Compania& compania) {
    Avion avion;
    
    

}

void agregarVuelo(Compania& compania) {

    

}

void generarReporte(Compania& compania) {
    
    
}

Compania cargarDatosDePrueba() {
    //Agrega manualmente los datos de prueba, como si se hubieran leído de un archivo

    // Avianca
    // 6052-20,6053-30
    // 6052,AV1120,Bogota,Rio de Janeiro,21/11/2024
    // 6052,AV1121,Rio de Janeiro,Bogota,12/12/2024
    // 6053,AV1240,Bogota,Cali,13/10/2024
    // 6053,AV1242,Medellin,Bucaramanga,10/02/2025
    // #
    // American Airlines
    // 2040-25
    // 2040,AA1120,Bogota,Miami,10/05/2024
    // 2040,AA1124,Bogota,Miami,19/05/2022
    // 2040,AA1121,Miami,Madrid,12/12/2024
    // #

    Compania compania;
    compania.numeroAviones = 3;
    compania.aviones = new Avion[3];

    //Aviones de Avianca
    Avion avion1;
    avion1.nombreEmpresa = "Avianca";
    avion1.codigo = "6052";
    avion1.numeroAsientos = 20;
    avion1.numeroVuelos = 2;
    avion1.vuelos = new Vuelo[2];
    
    Avion avion2;
    avion2.nombreEmpresa = "Avianca";
    avion2.codigo = "6053";
    avion2.numeroAsientos = 30;
    avion2.numeroVuelos = 2;
    avion2.vuelos = new Vuelo[2];
    
    //Vuelos del avión 6052
    avion1.vuelos[0].codigo = "AV1120";
    avion1.vuelos[0].origen = "Bogota";
    avion1.vuelos[0].destino = "Rio de Janeiro";
    avion1.vuelos[0].fecha = "21/11/2024";

    avion1.vuelos[1].codigo = "AV1121";
    avion1.vuelos[1].origen = "Rio de Janeiro";
    avion1.vuelos[1].destino = "Bogota";
    avion1.vuelos[1].fecha = "12/12/2024";

    //Vuelos del avión 6053
    avion2.vuelos[0].codigo = "AV1240";
    avion2.vuelos[0].origen = "Bogota";
    avion2.vuelos[0].destino = "Cali";
    avion2.vuelos[0].fecha = "13/10/2024";

    avion2.vuelos[1].codigo = "AV1242";
    avion2.vuelos[1].origen = "Medellin";
    avion2.vuelos[1].destino = "Bucaramanga";
    avion2.vuelos[1].fecha = "10/02/2025";

    //Aviones de American Airlines

    Avion avion3;
    avion3.nombreEmpresa = "American Airlines";
    avion3.codigo = "2040";
    avion3.numeroAsientos = 25;
    avion3.numeroVuelos = 3;
    avion3.vuelos = new Vuelo[3];

    //Vuelos del avión 2040
    avion3.vuelos[0].codigo = "AA1120";
    avion3.vuelos[0].origen = "Bogota";
    avion3.vuelos[0].destino = "Miami";
    avion3.vuelos[0].fecha = "10/05/2024";

    avion3.vuelos[1].codigo = "AA1124";
    avion3.vuelos[1].origen = "Bogota";
    avion3.vuelos[1].destino = "Miami";
    avion3.vuelos[1].fecha = "19/05/2022";

    avion3.vuelos[2].codigo = "AA1121";
    avion3.vuelos[2].origen = "Miami";
    avion3.vuelos[2].destino = "Madrid";
    avion3.vuelos[2].fecha = "12/12/2024";

    compania.aviones[0] = avion1;
    compania.aviones[1] = avion2;
    compania.aviones[2] = avion3;

    cout << "Datos de prueba cargados exitosamente." << endl;

    return compania;
}

void imprimirCompania(Compania& compania) {
    cout << "Imprimiendo compañía..." << endl;
    cout << "Número de aviones: " << compania.numeroAviones << endl;
    cout << endl;
    for (int i = 0; i < compania.numeroAviones; i++) {
        cout << "   Avión " << i + 1 << endl;
        cout << "   Nombre de la empresa: " << compania.aviones[i].nombreEmpresa << endl;
        cout << "   Código: " << compania.aviones[i].codigo << endl;
        cout << "   Número de asientos: " << compania.aviones[i].numeroAsientos << endl;
        cout << "   Número de vuelos: " << compania.aviones[i].numeroVuelos << endl;
        cout << "   Vuelos: " << endl;
        for (int j = 0; j < compania.aviones[i].numeroVuelos; j++) {
            cout << "       Vuelo " << j + 1 << endl;
            cout << "       Código: " << compania.aviones[i].vuelos[j].codigo << endl;
            cout << "       Origen: " << compania.aviones[i].vuelos[j].origen << endl;
            cout << "       Destino: " << compania.aviones[i].vuelos[j].destino << endl;
            cout << "       Fecha: " << compania.aviones[i].vuelos[j].fecha << endl;
            cout << endl;
        }
    }
}

