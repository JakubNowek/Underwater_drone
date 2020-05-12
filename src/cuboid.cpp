#include "cuboid.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>
using namespace std;

Cuboid::Cuboid(): angle{0}
{
    ifstream inputFile;
    inputFile.open(kModelCuboid);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Cuboid file!" 
             << endl;
        return;
    }

    Vector3D point;
    while(inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();
}

void Cuboid::draw(std::string filename,double angle) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }
  /*   RotationMatrix RotAng; */
  //szybka macierz neandertalska 
  SMacierz<double,3> RotAng;  // rozwiazanie dla jaskiniowcow bo czas goni 
  RotAng[0][0] = cos(angle);
  RotAng[0][1] = -sin(angle);
  RotAng[0][2] = 0;
  RotAng[1][0] = sin(angle);
  RotAng[1][1] = cos(angle);
  RotAng[1][2] = 0;
  RotAng[2][0] = 0;
  RotAng[2][1] = 0;
  RotAng[2][2] = 1;
   
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << RotAng * points[i] + translation << endl;
        if(i % 4 == 3) // triggers after every 4 points
        {
            outputFile << "#\n\n";
        }
    }
}