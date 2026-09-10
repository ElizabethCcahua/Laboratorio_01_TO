#include <iostream>
#include <string>
using namespace std;

class CitaMedica {
private:
    int codigoCita;
    string paciente;
    string nroAsegurado;
    string fechaAtencion;
    string tipoConsulta;
    string medicoTratante;
    string areaMedica;
    string estadoCita;

public:
    CitaMedica(int codigo, string nombrePaciente, string nroAseg, string fecha,
               string tipo, string medico, string area) {
        codigoCita = codigo;
        paciente = nombrePaciente;
        nroAsegurado = nroAseg;
        fechaAtencion = fecha;
        tipoConsulta = tipo;
        medicoTratante = medico;
        areaMedica = area;
        estadoCita = "Pendiente";
    }

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
    CitaMedica c1(101, "Maria Torres", "B98765", "2026-09-20 08:30",
                  "Control", "Dr. Salazar", "Pediatria");

    c1.confirmarCita();
    c1.cambiarFecha("2026-09-22 09:00");
    c1.imprimirDatos();

    return 0;
}
