#ifndef ROTATIONMATRIX_HH
#define ROTATIONMATRIX_HH

#include "SMacierz.hh"


class RotationMatrix : public SMacierz<double,3>
{
    public:
    
    RotationMatrix(double angle)
    {
        SWektor<double,3> W[ROZMIAR];
        for(int i = 0; i < ROZMIAR; ++i)
        {
            for (int j = 0; j < ROZMIAR; ++j)
            W[i][j] = 0;
            _Kolumna[i] = W[i];
        }
    }
};




#endif
