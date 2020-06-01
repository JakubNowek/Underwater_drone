#include "Obstacle.hh"

class Rod : public Obstacle
{
    public:
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie z pretem "<<std::endl;
    }
};