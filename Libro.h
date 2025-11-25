//Jorlen del Carmen Moreno Soria

#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <vector>
#include "Capitulo.h" //importar clase Capitulo

class Libro {

private:
    std::string titulo;
    std::string autor;
    std::vector<Capitulo> capitulos;

public: 
    Libro(std::string titulo = "", std::string autor = "");

    ~Libro(); //destructor


    //getters
    std::string getTitulo();
    std::string getAutor();
    std::vector<Capitulo> getCapitulos();

    //setters
    void setTitulo(std::string titulo);
    void setAutor(std::string autor);
    void setCapitulos(std::string capitulos); 
    void setCapitulos(std::vector<Capitulo> capitulos);

    void agregarCapitulo(Capitulo capitulo);
    void muestraLibro(); 
};

#endif