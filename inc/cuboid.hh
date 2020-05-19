#pragma once

#include "Surface.hh"

//const std::string kModelCuboid("solid/model.dat");

using Vector3D = SWektor<double,3>;



class Cuboid : public Surface
{
    public:
    Cuboid(const std::string filename) : Surface(filename){ }
    void Anim_Rotation(double angle, double frames,const std::string filename);
    void Anim_Move(Vector3D translation, double frames,const std::string filename);
};

