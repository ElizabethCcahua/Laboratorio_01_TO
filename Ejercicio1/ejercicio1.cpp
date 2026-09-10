#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
#include <cctype>  // Para tolower()

using namespace std;

// Función para ordenar de mayor a menor (Bubble Sort)
void ordenarMayorAMenor(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Intercambio
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para mostrar los elementos del arreglo
void mostrarArreglo(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    char opcion;

    // 1. Solicitar N (entero positivo)
    do {
        cout << "Ingrese N (numero entero positivo): ";
        cin >> N;
        if (N <= 0) {
            cout << "Error: N debe ser un numero mayor a 0.\n";
        }
    } while (N <= 0);

    int* arreglo = new int[N]; // Asignación dinámica para el arreglo de tamaño N

    // 2. Solicitar modo de ingreso
    do {
        cout << "Ingrese la opcion ('g' para autogenerar, 'i' para ingresar manualmente): ";
        cin >> opcion;
        opcion = tolower(opcion); // Convertir a minúscula

        if (opcion != 'g' && opcion != 'i') {
            cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 'g' && opcion != 'i');

    // Procesar la opción seleccionada
    if (opcion == 'g') {
        // Inicializar la semilla aleatoria con el tiempo actual
        srand(time(0));
        cout << "\nGenerando " << N << " numeros aleatorios entre 1 y " << N << "...\n";
        for (int i = 0; i < N; i++) {
            arreglo[i] = (rand() % N) + 1; // Genera enteros entre 1 y N
        }
    } else if (opcion == 'i') {
        cout << "\nIngrese los " << N << " numeros enteros:\n";
        for (int i = 0; i < N; i++) {
            cout << "Elemento [" << i + 1 << "]: ";
            cin >> arreglo[i];
        }
    }

    // Mostrar arreglo original
    cout << "\nArreglo original:\n";
    mostrarArreglo(arreglo, N);

    // 3. Ordenar de mayor a menor
    ordenarMayorAMenor(arreglo, N);

    // Mostrar arreglo ordenado
    cout << "\nArreglo ordenado de mayor a menor:\n";
    mostrarArreglo(arreglo, N);

    // Liberar memoria
    delete[] arreglo;

    return 0;
}
