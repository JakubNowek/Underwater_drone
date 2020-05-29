#include "RotationMatrix.hh"

/**
 * @brief konstruktor parametryczny tworzacy macierz rotacji wzgledem osi OZ
 * 
 * @param angle - kat o ktory chcemy obroic strukture w przestrzeni 3D
 * @return RotationMatrix RotationMatrix - gotowa macierz obrotu wzgledem osi OZ 
 */
RotationMatrix :: RotationMatrix(double angle,char os)
{
    double angleRad; //kat w radianach
    angleRad = angle*M_PI/180;

    if (os == 'z')
    {
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
    else if (os == 'x')
    {
    _Kolumna[0][0] = 1;
    _Kolumna[0][1] = 0;
    _Kolumna[0][2] = 0;
    _Kolumna[1][0] = 0;
    _Kolumna[1][1] = cos(angleRad);
    _Kolumna[1][2] = -sin(angleRad);
    _Kolumna[2][0] = 0;
    _Kolumna[2][1] = sin(angleRad);
    _Kolumna[2][2] = cos(angleRad);
    }
    else if (os == 'y')
    {
    _Kolumna[0][0] = cos(angleRad);
    _Kolumna[0][1] = 0;
    _Kolumna[0][2] = sin(angleRad);
    _Kolumna[1][0] = 0;
    _Kolumna[1][1] = 1;
    _Kolumna[1][2] = 0;
    _Kolumna[2][0] = -sin(angleRad);
    _Kolumna[2][1] = 0;
    _Kolumna[2][2] = cos(angleRad);
    }
}

/**
 * @brief 
 * 
 * @param angle - kat o ktory chcemy obroic strukture w przestrzeni 3D
 * @return RotationMatrix - macierz obrotu wzgledem osi OZ ze zmieniona wartoscia kata
 */
RotationMatrix RotationMatrix::AddAngle(double angle, char os)
{
    RotationMatrix Rot(angle,os);  //macierz pomocnicza
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