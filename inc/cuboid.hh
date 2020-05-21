#pragma once

#include "Surface.hh"

//skrot 
using Vector3D = SWektor<double,3>;


/**
 * @brief klasa dziedziczaca z klasy surface, modelujaca prostopadloscian
 * 
 */
class Cuboid : public Surface
{
    public:
    Cuboid(const std::string filename) : Surface(filename){ } //konstruktor parametryczny
    void Anim_Rotation(double angle, double frames,const std::string filename);
    void Anim_Move(Vector3D translation, double frames,const std::string filename);
};

