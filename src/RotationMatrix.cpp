#include "RotationMatrix.hh"


RotationMatrix :: RotationMatrix(double angle)
{
    _Kolumna[0][0] = cos(angle);
    _Kolumna[0][1] = -sin(angle);
    _Kolumna[0][2] = 0;
    _Kolumna[1][0] = sin(angle);
    _Kolumna[1][1] = cos(angle);
    _Kolumna[1][2] = 0;
    _Kolumna[2][0] = 0;
    _Kolumna[2][1] = 0;
    _Kolumna[2][2] = 1;
}