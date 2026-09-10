#include <iostream>
#include <iomanip> // Para setw
#include <string>

using namespace std;

struct Equipo {
    string nombre;
    int partidosJugados;
    int victorias;
    int derrotas;
    int puntos;
};

int main() {
    // Datos de tabla deportiva (Liga Peruana de Voleibol Femenino)
    Equipo tabla[] = {
        {"Alianza Lima", 10, 8, 2, 24},
        {"Regatas Lima", 10, 7, 3, 21},
        {"USMP",         10, 6, 4, 18},
        {"Circolo",      10, 4, 6, 12},
        {"Géminis",      10, 3, 7, 9},
        {"Deportivo Soledad", 10, 2, 8, 6}
    };

    int n = sizeof(tabla) / sizeof(tabla[0]);

    cout << "=== TABLA DE POSICIONES - LIGA DE VOLEIBOL (Con setw) ===\n\n";

    // Encabezado usando setw
    cout << setw(5)  << "Pos" 
         << setw(20) << "Equipo" 
         << setw(6)  << "PJ" 
         << setw(6)  << "PG" 
         << setw(6)  << "PP" 
         << setw(8)  << "Puntos" << endl;

    cout << string(51, '-') << endl;

    // Filas de datos
    for (int i = 0; i < n; i++) {
        cout << setw(5)  << (i + 1)
             << setw(20) << tabla[i].nombre
             << setw(6)  << tabla[i].partidosJugados
             << setw(6)  << tabla[i].victorias
             << setw(6)  << tabla[i].derrotas
             << setw(8)  << tabla[i].puntos << endl;
    }

    return 0;
}
