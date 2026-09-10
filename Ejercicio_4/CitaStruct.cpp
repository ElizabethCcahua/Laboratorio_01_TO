#include <iostream>
#include <string>
using namespace std;

struct CitaMedica {
    int codigoCita;
    string paciente;
    string nroAsegurado;
    string fechaAtencion;
    string tipoConsulta;
    string medicoTratante;
    string areaMedica;
    string estadoCita;

    void confirmarCita() {
        estadoCita = "Confirmada";
        cout << "Cita N° " << codigoCita << " confirmada para " << paciente << endl;
    }

    void anularCita() {
        estadoCita = "Anulada";
        cout << "Cita N° " << codigoCita << " anulada." << endl;
    }

    void cambiarFecha(string fechaNueva) {
        fechaAtencion = fechaNueva;
        estadoCita = "Reprogramada";
        cout << "Cita N° " << codigoCita << " reprogramada a: " << fechaNueva << endl;
    }

    void imprimirDatos() {
        cout << "Codigo: " << codigoCita << " | Paciente: " << paciente
             << " | Fecha: " << fechaAtencion << " | Estado: " << estadoCita << endl;
    }
};

int main() {
    CitaMedica c1;
    c1.codigoCita = 101;
    c1.paciente = "Maria Torres";
    c1.nroAsegurado = "B98765";
    c1.fechaAtencion = "2026-09-20 08:30";
    c1.tipoConsulta = "Control";
    c1.medicoTratante = "Dr. Salazar";
    c1.areaMedica = "Pediatria";

    c1.confirmarCita();
    c1.cambiarFecha("2026-09-22 09:00");
    c1.imprimirDatos();

    return 0;
}
