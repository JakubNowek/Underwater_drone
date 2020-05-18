#include "RotationMatrix.hh"


RotationMatrix :: RotationMatrix(double angle)
{
    double angleRad;
    angleRad = angle*M_PI/180;
    _Kolumna[0][0] = cos(angleRad);
    _Kolumna[0][1] = -sin(angleRad);
    _Kolumna[0][2] = 0;
    _Kolumna[1][0] = sin(angleRad);
    _Kolumna[1][1] = cos(angleRad);
    _Kolumna[1][2] = 0;
    _Kolumna[2][0] = 0;
    _Kolumna[2][1] = 0;
    _Kolumna[2][2] = 1;
}