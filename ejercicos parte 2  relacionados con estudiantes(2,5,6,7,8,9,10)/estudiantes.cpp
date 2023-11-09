#include <iostream>
#include<string>
#include <vector>
#include <list>
#include <numeric>
using namespace std;
class Profesor {
public:
    Profesor(const std::string& nombre, int edad, const std::string& materia, int experiencia)
            : nombre_(nombre), edad_(edad), materia_(materia), experiencia_(experiencia) {}

    void mostrar_info_profesor() {
        std::cout << "Informacion del Profesor:" << std::endl;
        std::cout << "Nombre: " << nombre_ << std::endl;
        std::cout << "Edad: " << edad_ << std::endl;
        std::cout << "Materia que imparte: " << materia_ << std::endl;
        std::cout << "Años de experiencia: " << experiencia_ << std::endl;
    }

    void imprimir_info_profesor() {
        std::cout << "Profesor: " << nombre_ << ", Edad: " << edad_
                  << ", Materia: " << materia_ << ", Años de experiencia: " << experiencia_ << std::endl;
    }

private:
    std::string nombre_;
    int edad_;
    std::string materia_;
    int experiencia_;
};
