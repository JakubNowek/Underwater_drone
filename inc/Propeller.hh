#pragma once

#include "cuboid.hh"


/**
 * @brief klasa dziedziczasa z klasy kuboid , modelujaca pojecie rotora drona
 * 
 */
class Propeller : public Cuboid 
{
    double angleXY;
    Vector3D difference;
    public:
    Propeller(const std::string filename) : Cuboid(filename){ angleXY = 0; } //konstruktor parametryczny 
    void draw(std::string filename) const;
    void Anim_Rotation(double angle, double frames,const std::string filename);
    void Anim_Move(Vector3D translation,double velocity, double frames,const std::string filename);
    void rotateXY(const double& change) //powoduje ,ze kat obrotu jest suma wszystkich katow obrotu srub wokol osi xy, eiminujac bledy powielania
    {
        angleXY = angleXY + change;
    }
    double& GetAngleXY()  {return angleXY;} //tak pozyskujemy kat, zeby go zmienic
    double const AngleXY() {return angleXY;} //tak zyskujemy podglad na wartosc kata  
    void SetDifference(double x,double y,double z) {difference[0] = x; difference[1] = y; difference[2] = z;}
};