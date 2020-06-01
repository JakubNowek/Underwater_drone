#include "Propeller.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>
using namespace std;

/**
 *  @brief funkcja analogiczna do funkcji draw w klasie Surface
 * 
 */
void Propeller::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

    RotationMatrix Rotz(-angle,'z'), Rotx(angleXY,'x'), Roty(angleXY,'y') ;
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << Rotz * Rotx * (points[i] + difference) + translation - difference   << endl;
        if(i % 4 == 3) // uruchamia sie co 4 punkty
        {
            outputFile << "#\n\n";
        }
    }
}
/**
 * @brief funkcja analogiczna do funkcji Animated_Rotation dla klasy cuboid
 * 
 */
void Propeller::Anim_Rotation( double angle, double frames, const std::string filename)
{
      auto temp1 = angle/frames;
      auto temp2 = 360/frames;
      //cout << "AngleXY  " <<temp1<<endl;
      this->rotate(temp1);
      this->rotateXY(temp2);
      this->draw(filename);
}

/**
 * @brief funkcja analogiczna do funkcji Animated_Move dla klasy cuboid
 * 
 */
void Propeller::Anim_Move(Vector3D translation,double velocity, double frames,const std::string filename)
{     

      auto temp1 = translation / frames;
      auto temp2 = velocity/frames;
      this->rotateXY(temp2);
      this->translate(temp1); // a tutaj sobie przesuwamy
      this->draw(filename);
}
