#pragma once
#include "Surface.hh"

/**
 * @brief klasa modeluje pojecie przeszkody
 * 
 * Zawiera konstruktor, destruktor oraz funkcje wyswietajaca nazwe kolizji
 * 
 */
class Obstacle : public Surface
{   
    public:
    Obstacle(const std::string filename) : Surface(filename) { }  //konstruktor parametryczny
    virtual ~Obstacle() {}
    virtual void CollisionName() const {}; //funkcja wyswietla nazwe przeszkody z ktora doszlo do zderzenia
};