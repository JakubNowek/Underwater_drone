#pragma once
#include "Obstacle.hh"

class Cube : public Obstacle
{
    public:
    Cube(const std::string filename) : Obstacle(filename){ }
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z blokiem "<<std::endl;
    }
};