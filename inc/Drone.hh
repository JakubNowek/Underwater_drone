#pragma once

#include "cuboid.hh"
#include "Propeller.hh"

class Drone 
{
    Propeller lRotor, rRotor;
    Cuboid cuboid;
    public:
    void Anim_Rotation(double angle, double frames,const std::string filename);
    void Anim_Move(Vector3D translation,double velocity, double frames,const std::string filename);
    
};