#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <vector>
#include "Outfits.h"

class Persona {
private:
    std::string nombre;
    std::vector<Outfits> outfits;

public:
    Persona(std::string nombre = "");

    std::string getNombre() const;
    std::vector <Outfits> getOutfits() const;

    void setNombre(const std::string& nombre);
    void setOutfits(const std::vector<Outfits>& outfits);

    void agregarOutfit(const Outfits& outfit);
    void mostrarOutfits() const;
};
#endif
