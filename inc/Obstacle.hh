#pragma once
#include "Surface.hh"

class Obstacle : public Surface
{   
    double collision_center;
    
    public:
    Obstacle(const std::string filename) : Surface(filename){ }  //konstruktor parametryczny
    //virtual void Collision();
    //virtual ~Obstacle() {};

};