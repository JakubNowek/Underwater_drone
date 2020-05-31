#pragma once

#include <vector>
#include <string>
#include "SWektor.hh"
#include "SMacierz.hh"
#include "RotationMatrix.hh"

using Vector3D = SWektor<double,3>;

/**
 * @brief klasa bazowa modelujaca pojecie obiektu 3D, zawiera:
 * - wierzcholki bryl
 * - aktualne przesuniecie bryly 
 * - aktualny kat o jaki bryla jest obrocona
 */
class Surface{

protected: 
    std::vector<Vector3D> points;
    Vector3D translation; //aktualne przesuniecie obiektu
    double angle; //kąt o który obracamy

public:
    Surface(const std::string filename);
    void draw(std::string filename) const;
    void translate(const Vector3D& change);  
    void rotate(const double& change) //powoduje ,ze kat obrotu jest suma wszystkich katow obrotu, eiminujac bledy powielania
    {
        angle = angle + change;
    }
    double& GetAngle()  {return angle;} //tak pozyskujemy kat, zeby go zmienic
    double const Angle() {return angle;} //tak zyskujemy podglad na wartosc kata  
};