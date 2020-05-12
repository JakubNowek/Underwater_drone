#ifndef ROTATIONMATRIX_HH
#define ROTATIONMATRIX_HH

#include "SMacierz.hh"


class RotationMatrix : public SMacierz<double,3>
{
    public:
    
    RotationMatrix(double angle);
};
 
//zrobie jak bedzie na czas, na razie po neandertalsku mam w cuboidzie


#endif
