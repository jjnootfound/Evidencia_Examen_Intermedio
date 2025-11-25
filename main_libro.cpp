#include "Libro.h"
#include "Capitulo.h"

int main() {
    Libro libro("programación básica", "Jorlen Moreno");

    Capitulo cap1("Introducción a C++", 30);
    Capitulo cap2("Clases y Objetos", 45);
    Capitulo cap3("Herencia y Polimorfismo", 50);

    libro.agregarCapitulo(cap1);
    libro.agregarCapitulo(cap2);
    libro.agregarCapitulo(cap3);

    libro.muestraLibro();

    return 0;
}