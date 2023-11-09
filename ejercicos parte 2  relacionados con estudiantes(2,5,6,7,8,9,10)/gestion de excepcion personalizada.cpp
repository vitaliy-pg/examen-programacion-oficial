#include <iostream>
#include <stdexcept>
#include <string>
#include <set>

class MateriaRegistradaExcepcion : public std::exception {
public:
    MateriaRegistradaExcepcion(const std::string& materia) : materia_("La materia '" + materia + "' ya ha sido registrada.") {}

    const char* what() const noexcept override {
        return materia_.c_str();
    }

private:
    std::string materia_;
};
class Estudiante {
public:
    void registrarMateria(const std::string& materia) {
        if (!materiasRegistradas_.insert(materia).second) {
            throw MateriaRegistradaExcepcion(materia);
        }
        std::cout << "Materia registrada: " << materia << std::endl;
    }

private:
    std::set<std::string> materiasRegistradas_;
};
int main() {
    Estudiante estudiante;

    try {
        estudiante.registrarMateria("Matematicas");
        estudiante.registrarMateria("Historia");
        estudiante.registrarMateria("Matematicas");  //  Intentamos registrar la misma materia de nuevo
    } catch (const MateriaRegistradaExcepcion& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

