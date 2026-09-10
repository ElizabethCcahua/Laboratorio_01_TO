#include <iostream>
#include <iomanip> // Para left, right, setfill y setw
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
    Equipo tabla[] = {
        {"Alianza Lima", 10, 8, 2, 24},
        {"Regatas Lima", 10, 7, 3, 21},
        {"USMP",         10, 6, 4, 18},
        {"Circolo",      10, 4, 6, 12},
        {"Géminis",      10, 3, 7, 9},
        {"Deportivo Soledad", 10, 2, 8, 6}
    };

    int n = sizeof(tabla) / sizeof(tabla[0]);

    cout << "=== TABLA DE POSICIONES - LIGA DE VOLEIBOL (Con left / right / setfill) ===\n\n";

    // Encabezado usando left y right para alineación explícita
    cout << left  << setw(5)  << "Pos" 
         << left  << setw(20) << "Equipo" 
         << right << setw(6)  << "PJ" 
         << right << setw(6)  << "PG" 
         << right << setw(6)  << "PP" 
         << right << setw(8)  << "Pts" << endl;

    // Uso de setfill para dibujar la línea divisoria de la tabla
    cout << setfill('-') << setw(51) << "" << setfill(' ') << endl;

    // Filas con alineación: texto a la izquierda, números a la derecha
    for (int i = 0; i < n; i++) {
        cout << left  << setw(5)  << (i + 1)
             << left  << setw(20) << tabla[i].nombre
             << right << setw(6)  << tabla[i].partidosJugados
             << right << setw(6)  << tabla[i].victorias
             << right << setw(6)  << tabla[i].derrotas
             << right << setw(8)  << tabla[i].puntos << endl;
    }

    return 0;
}
