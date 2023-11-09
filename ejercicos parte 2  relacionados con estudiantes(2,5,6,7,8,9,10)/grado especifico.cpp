#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    Estudiante(const std::string& nombre, int grado) : nombre(nombre), grado(grado) {}

    std::string getNombre() const {
        return nombre;
    }

    int getGrado() const {
        return grado;
    }

private:
    std::string nombre;
    int grado;
};
std::vector<Estudiante> filtrarEstudiantesPorGrado(const std::vector<Estudiante>& estudiantes, int gradoDeseado) {
    std::vector<Estudiante> estudiantesFiltrados;
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.getGrado() == gradoDeseado) {
            estudiantesFiltrados.push_back(estudiante);
        }
    }
    return estudiantesFiltrados;
}

int main() {
    // Crear un vector de estudiantes
    std::vector<Estudiante> estudiantes = {
            Estudiante("Juan", 5),
            Estudiante("María", 6),
            Estudiante("Pedro", 5),
            Estudiante("Luis", 7),
            Estudiante("Ana", 6)
    };

    // Grado que deseas filtrar
    int gradoDeseado = 5;

    // Filtrar estudiantes por grado
    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(estudiantes, gradoDeseado);

    // Imprimir los estudiantes del grado deseado
    std::cout << "Estudiantes del grado " << gradoDeseado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << estudiante.getNombre() << std::endl;
    }

    return 0;
}

