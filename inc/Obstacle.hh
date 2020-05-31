#pragma once
#include "Surface.hh"

class Obstacle : public Surface
{
    public:
    Obstacle(const std::string filename) : Surface(filename){ }  //konstruktor parametryczny
   /*  virtual void Collision(); */ 

};