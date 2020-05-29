#ifndef ROTATIONMATRIX_HH
#define ROTATIONMATRIX_HH

#include "SMacierz.hh"


class RotationMatrix : public SMacierz<double,3>
{
    public:
    
    RotationMatrix(double angle, char os);
    RotationMatrix AddAngle(double angle, char os);
};
 
//zrobie jak bedzie na czas, na razie po neandertalsku mam w cuboidzie


#endif
