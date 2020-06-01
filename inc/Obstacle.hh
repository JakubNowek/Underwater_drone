#pragma once
#include "Surface.hh"

/**
 * @brief klasa modeluje pojecie przeszkody
 * 
 */
class Obstacle : public Surface
{   
    public:
    Obstacle(const std::string filename) : Surface(filename){ }  //konstruktor parametryczny
    virtual void CollisionName() const = 0;

};