//Jorlen del Carmen Moreno Soria

#include "Outfits.h"

Outfits::Outfits(std::string marca, std::string color) : marca(marca), color(color) {}

std::string Outfits::getMarca() const {
    return marca;
}
std::string Outfits::getColor() const {
    return color;
}

void Outfits::setMarca(const std::string& marca) {
    this->marca = marca;
}

void Outfits::setColor(const std::string& color) {
    this->color = color;
}