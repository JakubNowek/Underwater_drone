#pragma once
#include "Obstacle.hh"

/**
 * @brief klasa dziedziczaca z klasy przeszkody, modeujaca pojecie sciany
 * 
*/
class Wall : public Obstacle
{
    public:
    Wall(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie ze sciana "<<std::endl;
    }
};