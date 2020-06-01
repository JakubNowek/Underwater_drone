#pragma once
#include "Surface.hh"

/**
 * @brief klasa modeluje pojecie przeszkody
 * 
 */
class Obstacle : public Surface
{   
    public:
    Obstacle(const std::string filename) : Surface(filename) { }  //konstruktor parametryczny
    virtual ~Obstacle() {}
    virtual void CollisionName() const {};
};