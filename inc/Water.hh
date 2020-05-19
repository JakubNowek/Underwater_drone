#pragma once

#include "Surface.hh"


class Water : public Surface
{

    public:
    Water(const std::string filename) : Surface(filename) { }
    void draw(std::string filename) const;
};