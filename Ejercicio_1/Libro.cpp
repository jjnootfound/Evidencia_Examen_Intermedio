//Jorlen del Carmen Moreno Soria
#include <iostream>
#include "Libro.h"

Libro::Libro(std::string titulo, std::string autor) {
    this->titulo = titulo;
    this->autor = autor;
}

std::string Libro::getTitulo() {
    return titulo;
}

std::string Libro::getAutor() {
    return autor;
}

std::vector<Capitulo> Libro::getCapitulos() {
    return capitulos;
}

void Libro::setTitulo(std::string titulo) {
    this->titulo = titulo;
}

void Libro::setAutor(std::string autor) {
    this->autor = autor;
}

void Libro::setCapitulos(std::vector<Capitulo> capitulos) {
    this->capitulos = capitulos;
}

void Libro::agregarCapitulo(Capitulo capitulo) {
    capitulos.push_back(capitulo);
}

void Libro::muestraLibro() {
    std::cout << "Título del libro: " << titulo << std::endl;
    std::cout << "Autor del libro: " << autor << std::endl;
    std::cout << "Capítulos:" << std::endl;

    for (size_t i = 0; i < capitulos.size(); i++) {
        Capitulo c = capitulos[i];
        std::cout << "  * " << c.getTitulo()
            << " (" << c.getPaginas() << " paginas)\n";
    }
}