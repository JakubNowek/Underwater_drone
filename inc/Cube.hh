#include "Obstacle.hh"

class Cube : public Obstacle
{
    public:
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z blokiem "<<std::endl;
    }
};