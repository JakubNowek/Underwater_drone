#include "Obstacle.hh"

class Wall : public Obstacle
{
    public:
    virtual void CollisionName() const override
    {
        std::cout<< "Zderzenie ze sciana "<<std::endl;
    }
};