#pragma once

#include "Surface.hh"


class Rectangle : public Surface
{

    public:
    Rectangle(const std::string filename) : Surface(filename) { }

};