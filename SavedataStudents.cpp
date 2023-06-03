#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    string apellido;
    vector<string> materias;
    vector<int> notas;
    int promedio;
};

void ingresarDatosAlumno(Alumno& alumno) {
    cout << "Ingrese el nombre del alumno: ";
    cin >> alumno.nombre;
    cout << "Ingrese el apellido del alumno: ";
    cin >> alumno.apellido;

    for (int i = 0; i < 5; i++) {
        string nombreMateria;
        int nota;

        cout << "Ingrese el nombre de la materia " << (i + 1) << ": ";
        cin >> nombreMateria;
        alumno.materias.push_back(nombreMateria);

        cout << "Ingrese la calificación de " << nombreMateria << ": ";
        cin >> nota;
        alumno.notas.push_back(nota);
    }
}

void calcularPromedioAlumno(Alumno& alumno) {
    int suma = 0;
    for (int nota : alumno.notas) {
        suma += nota;
    }
    alumno.promedio = suma / alumno.notas.size();
}

void imprimirPromedioAlumnos(const vector<Alumno>& alumnos) {
    for (const Alumno& alumno : alumnos) {
        cout << "El promedio del alumno " << alumno.apellido << " " << alumno.nombre
                  << " es " << alumno.promedio << endl;
    }
}

int calcularPromedioGrupo(const vector<Alumno>& alumnos) {
    int suma = 0;
    for (const Alumno& alumno : alumnos) {
        suma += alumno.promedio;
    }
    return suma / alumnos.size();
}

int main() {
    int cantidadAlumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidadAlumnos;

    vector<Alumno> alumnos(cantidadAlumnos);

    for (int i = 0; i < cantidadAlumnos; i++) {
        cout << "Datos del alumno " << (i + 1) << endl;
        ingresarDatosAlumno(alumnos[i]);
        calcularPromedioAlumno(alumnos[i]);
    }

    imprimirPromedioAlumnos(alumnos);

    int promedioGrupo = calcularPromedioGrupo(alumnos);
    cout << "El promedio del grupo es de " << promedioGrupo << endl;

    return 0;
}
