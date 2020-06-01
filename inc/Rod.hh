#pragma once
#include "Obstacle.hh"

/**
 * @brief klasa dziedziczaca z klasy przeszkody, modeujaca pojecie preta
 * 
*/

class Rod : public Obstacle
{
    public:
    Rod(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z pretem "<<std::endl;
    }
};