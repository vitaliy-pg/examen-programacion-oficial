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


