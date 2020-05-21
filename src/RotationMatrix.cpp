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

RotationMatrix RotationMatrix::AddAngle(double angle)
{
    RotationMatrix Rot(angle);
    double angleRad;
    angleRad = angle*M_PI/180;
    Rot._Kolumna[0][0] = cos(angleRad);
    Rot._Kolumna[0][1] = -sin(angleRad);
    Rot._Kolumna[0][2] = 0;
    Rot._Kolumna[1][0] = sin(angleRad);
    Rot._Kolumna[1][1] = cos(angleRad);
    Rot._Kolumna[1][2] = 0;
    Rot._Kolumna[2][0] = 0;
    Rot._Kolumna[2][1] = 0;
    Rot._Kolumna[2][2] = 1;

    return Rot;

}