#pragma once

#include <vector>
#include <string>
#include "SWektor.hh"
#include "SMacierz.hh"



using Vector3D = SWektor<double,3>;


class Surface{

protected: 
    std::vector<Vector3D> points;
    Vector3D translation;
    double angle; //kąt o który obracamy

public:
    Surface(const std::string filename);
    void draw(std::string filename) const;
    void translate(const Vector3D& change)
    {
        translation = translation + change;
    }
    double& GetAngle()  {return angle;} //tak pozyskujemy kat
};