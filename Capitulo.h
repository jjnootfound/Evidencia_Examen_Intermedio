//Jorlen del Carmen Moreno Soria

#ifndef CAPITULO_H
#define CAPITULO_H

#include <string>

class Capitulo {
private:
    std::string titulo;
    int paginas;

public:
    Capitulo(std::string t = "", int p = 0);
    
    std::string getTitulo() const;
    int getPaginas() const;

    void setTitulo(std::string t);
    void setPaginas(int p);
};

#endif