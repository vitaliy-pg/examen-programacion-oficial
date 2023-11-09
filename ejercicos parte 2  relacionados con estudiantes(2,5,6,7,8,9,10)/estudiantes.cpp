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
class RegistroAsistencia {
public:
    RegistroAsistencia(const std::string& fecha, const std::string& estado, int tardanza)
            : fecha_(fecha), estado_(estado), tardanza_(tardanza) {}

    const std::string& getFecha() const {
        return fecha_;
    }

    const std::string& getEstado() const {
        return estado_;
    }

    int getTardanza() const {
        return tardanza_;
    }

private:
    std::string fecha_;
    std::string estado_;
    int tardanza_;
};
class Estudiante{
public :
    Estudiante(string nombre, string apellido, int edad, string carrera){
        this->nombre = nombre;
        this->apellido = apellido;
        this->edad = edad;
        this->carrera = carrera;
    }

    Estudiante(const char string[12], int i, const char string1[13]) {

    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }
    string getNombre(){
        return nombre;
    }
    void setApellido(string apellido){
        this->apellido = apellido;
    }
    string getApellido(){
        return apellido;
    }
    void setEdad(int edad){
        this->edad = edad;
    }
    int getEdad(){
        return edad;
    }
    void setCarrera(string carrera){
        this->carrera = carrera;
    }
    string getCarrera(){
        return carrera;
    }
    void mostrarEstudiante(){
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
        cout << "Carrera: " << carrera << endl;

    }
    const std::string& getGrado() const {
        return carrera;
    }

    void registrar_materia(basic_string<char> materia) {
        materias_.push_back(materia);
    }


    void mostrar_materias() {
        std::cout << "Materias registradas:" << std::endl;
        for (const std::string& materia : materias_) {
            std::cout << "- " << materia << std::endl;
        }
    }

    void registrar_calificacion(const std::string& materia, double calificacion) {
        materias_calificaciones_.push_back(std::make_pair(materia, calificacion));
    }

    void mostrar_calificaciones() {
        std::cout << "Calificaciones registradas:" << std::endl;
        for (const auto& materia_calificacion : materias_calificaciones_) {
            std::cout << "- " << materia_calificacion.first << ": " << materia_calificacion.second << std::endl;
        }
    }

    double calcular_promedio_calificaciones() {
        if (materias_calificaciones_.empty()) {
            return 0.0;
        }
        double sum = 0.0;
        for (const auto& materia_calificacion : materias_calificaciones_) {
            sum += materia_calificacion.second;
        }
        return sum / materias_calificaciones_.size();
    }

    void registrar_asistencia(const RegistroAsistencia& registro) {
        asistencias_.push_back(registro);
    }

    void mostrar_asistencias() {
        std::cout << "Asistencias registradas:" << std::endl;
        for (const RegistroAsistencia& registro : asistencias_) {
            std::cout << "- Fecha: " << registro.getFecha() << " | Estado: " << registro.getEstado() << std::endl << " :)  Tardanza (minutos): " << registro.getTardanza() << std::endl;
        }
    }

    std::list<Estudiante> grado_especifico(const std::vector<Estudiante>& estudiantes, const std::string& carrera) {
        std::list<Estudiante> estudiantes_carrera;
        for (const Estudiante& estudiante : estudiantes) {
            if (estudiante.getGrado() == carrera) {
                estudiantes_carrera.push_back(estudiante);
            }
        }
        return estudiantes_carrera;
    }
    const std::string& getCarrera() const {
        return carrera;
    }

    void mostrar_informacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Carrera: " << carrera<< std::endl;
    }




private:
    string nombre;
    string apellido;
    int edad;
    string carrera;
    std::vector<std::string> materias_;
    std::vector<std::pair<std::string, double>> materias_calificaciones_;
    std::list<RegistroAsistencia> asistencias_;
};

std::vector<Estudiante> carrera_especifico(const std::vector<Estudiante>& estudiantes, const std::string& carrera) {
    std::vector<Estudiante> estudiantes_carrera;
    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.getCarrera() == carrera) {
            estudiantes_carrera.push_back(estudiante);
        }
    }
    return estudiantes_carrera;
}

int main(){

    Estudiante estudiante = Estudiante("vitaliy", "perez garcia", 18, "ingenieria informatica");
    estudiante.mostrarEstudiante();

    estudiante.registrar_materia("Matematicas");
    estudiante.registrar_materia("ingles");
    estudiante.registrar_materia("Programacion");
    estudiante.registrar_materia("informatica");
    estudiante.registrar_materia("tecnicas de la comunicacion");
    estudiante.registrar_materia("fisica");



    estudiante.registrar_calificacion("Matematicas", 9);
    estudiante.registrar_calificacion("ingles", 8.5);
    estudiante.registrar_calificacion("Programacion", 0);
    estudiante.registrar_calificacion("informatica", 7.5);
    estudiante.registrar_calificacion("tecnicas de la comunicacion", 10);
    estudiante.registrar_calificacion("fisica", 6.5);



    estudiante.registrar_asistencia(RegistroAsistencia("2023-11-02", "Falto", 120.00));
    estudiante.registrar_asistencia(RegistroAsistencia("2023-11-03", "Tardanza", 5.00));
    estudiante.registrar_asistencia(RegistroAsistencia("2023-11-03", "Asistencia", 0.0));
    estudiante.registrar_asistencia(RegistroAsistencia("2023-11-03", "Asistencia", 0.0));
    estudiante.registrar_asistencia(RegistroAsistencia("2023-11-03", "Asistencia", 0.0));

    std::vector<Profesor> profesores;

    profesores.push_back(Profesor("Jose Antonio", 50, "Matematicas", 15));
    profesores.push_back(Profesor("Paola", 35, "Ingles", 9));
    profesores.push_back(Profesor("Ruben Jurado", 40, "Programacion", 12));
    profesores.push_back(Profesor("Marta", 60, "Informatica", 16));
    profesores.push_back(Profesor("Oscar", 46, "T.comunicacion", 10));
    profesores.push_back(Profesor("Eduardo", 43, "Fisica", 7));


    estudiante.mostrar_materias();
    estudiante.mostrar_calificaciones();

    double promedio = estudiante.calcular_promedio_calificaciones();
    std::cout << "Promedio de calificaciones: " << promedio << std::endl;

    estudiante.mostrar_asistencias();
    for (Profesor profesor : profesores) {
        profesor.mostrar_info_profesor();
        std::cout << std::endl;
    }
    return 0;
}



