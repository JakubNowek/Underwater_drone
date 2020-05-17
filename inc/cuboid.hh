#pragma once

#include "Surface.hh"
//const std::string kModelCuboid("solid/model.dat");

using Vector3D = SWektor<double,3>;



class Cuboid : public Surface
{
    public:
    Cuboid(const std::string filename)
    : Surface(filename)
    {

    }
};