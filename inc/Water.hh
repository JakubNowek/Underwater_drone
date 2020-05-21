#pragma once

#include "Surface.hh"

/**
 * @brief klasa dziedzizaca z klasy bazowej, modelujaca pojecie powierzchni wody
 * 
 */
class Water : public Surface
{

    public:
    Water(const std::string filename) : Surface(filename) { } //konstruktor parametryczny
    void draw(std::string filename) const;
};