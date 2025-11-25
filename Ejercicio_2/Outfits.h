//Jorlen del Carmen Moreno Soria

#ifndef OUTFITS_H
#define OUTFITS_H

#include <string>

class Outfits {
private:
    std::string marca;
    std::string color;

//Constructor
public:
    Outfits(std::string marca = "", std::string color = " ");

    std::string getMarca() const;
    std::string getColor() const;

    void setMarca(const std::string& marca);
    void setColor(const std::string& color);

    void mostrarOutfit() const;
};
#endif