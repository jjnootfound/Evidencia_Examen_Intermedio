#include "Persona.h"
#include <iostream>
#include <vector> // Added for std::vector
#include "Outfits.h" // Added for Outfits type

Persona::Persona(std::string nombre) : nombre(nombre) {}

std::string Persona::getNombre() const { return nombre; }
std::vector<Outfits> Persona::getOutfits() const { return outfits; } 
void Persona::setNombre(const std::string& n) { nombre = n; } 
void Persona::setOutfits(const std::vector<Outfits>& o) { outfits = o; } 

void Persona::agregarOutfit(const Outfits& outfit) { // Fixed function signature
    outfits.push_back(outfit); // Fixed variable name
}

void Persona::mostrarOutfits() const {
    std::cout << "Persona: " << nombre << "\nPrendas:\n";
    for (const auto& p : outfits) { // Fixed variable name
        std::cout << "  * " << p.getMarca() << " - " << p.getColor() << "\n";
    }
}