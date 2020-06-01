#pragma once
#include "Obstacle.hh"

class Rod : public Obstacle
{
    public:
    Rod(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z pretem "<<std::endl;
    }
};