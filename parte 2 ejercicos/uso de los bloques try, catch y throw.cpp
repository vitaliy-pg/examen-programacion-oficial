#include <iostream>
#include <stdexcept>

using namespace std;
int main() {
    float n, d, resultado = 0;
    std::cout << "Introduce el numerador: ";
    std::cin >> n;

    std::cout << "Introduce el denominador: ";
    std::cin >> d;
    try {
        if (d == 0) {
            throw std::runtime_error("División por cero no permitida");
        }
        resultado = n/ d;
        std::cout << "Resultado de la division: " << resultado << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    cout.precision(6);
    return 0;
}