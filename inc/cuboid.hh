#pragma once

#include <vector>
#include <string>
#include "SWektor.hh"
#include "SMacierz.hh"

const std::string kModelCuboid("solid/model.dat");

using Vector3D = SWektor<double,3>;



class Cuboid{
    std::vector<Vector3D> points;
    Vector3D translation;
    double angle; //kąt o który obracamy

public:
    Cuboid();
    void draw(std::string filename, double angle) const;
    void translate(const Vector3D& change)
    {
        translation = translation + change;
    }
};