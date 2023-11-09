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

