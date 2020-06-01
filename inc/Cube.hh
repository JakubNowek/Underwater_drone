#pragma once
#include "Obstacle.hh"

/**
 * @brief klasa dziedziczaca z klasy przeszkody, modeujaca pojecie prostopadlosciennej przeszkody
 * 
*/

class Cube : public Obstacle
{
    public:
    Cube(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z blokiem "<<std::endl;
    }
};