#pragma once

#include "Surface.hh"
#include "cuboid.hh"
#include "Propeller.hh"
/**
 * @brief klasa dziedzizaca z klasy bazowej, modelujaca pojecie powierzchni wody
 * 
 */
class Water : public Surface
{
    double level;
    public:
    Water(const std::string filename); //konstruktor parametryczny
    void draw(std::string filename) const;
    double const getLevel() {return level;} 
};