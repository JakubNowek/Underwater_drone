#include <iostream>
#include <vector>
#include "SWektor.hh"

using Wektor3D = SWektor<double,3>;

class Prostopadloscian
{
    std::vector<Wektor3D> Punkty;
    public:
    std::vector<Wektor3D> get_punkty() const {return Punkty;}
    std::vector<Wektor3D>& get_punkty() {return Punkty;}
};


std::ostream& operator << (std::ostream& StrmWyj,const Prostopadloscian &Prost );