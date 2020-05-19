#pragma once

#include "Surface.hh"


class Bottom : public Surface
{

    public:
    Bottom(const std::string filename) : Surface(filename) { }
    void draw(std::string filename) const;
};