#pragma once

#include <vector>
#include <string>
#include "SWektor.hh"
#include "SMacierz.hh"
// #include "gnuplot_link.hh"

#include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 


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
    /* void AnimatedTranslation();
    void AnimatedRotation(double angle, Vector3D translation, PzG::GnuplotLink& link,const std::string filename);  */
};