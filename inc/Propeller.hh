#pragma once

#include "cuboid.hh"

class Propeller : public Cuboid 
{
    public:
    Propeller(const std::string filename) : Cuboid(filename){ } //konstruktor parametryczny 
};