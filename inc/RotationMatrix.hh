#ifndef ROTATIONMATRIX_HH
#define ROTATIONMATRIX_HH

#include "SMacierz.hh"

/**
 * @brief funkcja modelujaca pojecie macierzy rotacji bedaca specjalnym przypadkiem klasy SMacierz
 *  Zawiera konstruktor oraz funkcje zmiany kata
*/
class RotationMatrix : public SMacierz<double,3>
{
    public:
    
    RotationMatrix(double angle, char os);
    RotationMatrix AddAngle(double angle, char os);
};


#endif
