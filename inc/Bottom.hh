#pragma once

#include "Surface.hh"

/**
 * @brief klasa dziedziczaca z klasy surface
 * odpowiada za dno zbiornika z dronem
 * 
 */
class Bottom : public Surface
{
    double level;
    public:
    Bottom(const std::string filename);//konstruktor parametryczny 
    void draw(std::string filename) const;
    double const getLevel() {return level;} 
};