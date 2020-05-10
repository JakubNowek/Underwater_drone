#include <iostream>
#include "Cuboid.hh"



std::ostream& operator << (std::ostream & OStream, const Cuboid & cubo)
{
    for(unsigned i : cubo.GetVertices())
    {
        OStream<<cubo.GetVertices()[i];
    }
}