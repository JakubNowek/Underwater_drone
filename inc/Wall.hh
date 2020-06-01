#pragma once
#include "Obstacle.hh"

class Wall : public Obstacle
{
    public:
    Wall(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie ze sciana "<<std::endl;
    }
};