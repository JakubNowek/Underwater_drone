#include "Surface.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>
using namespace std;

Surface::Surface(const string filename): angle{0}
{
    ifstream inputFile;
    inputFile.open(filename);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load model Surface file!" 
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

void Surface::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

    RotationMatrix Rotz((*this).angle);
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << Rotz * points[i] + translation << endl;
        if(i % 4 == 3) // triggers after every 4 points
        {
            outputFile << "#\n\n";
        }
    }
}

 /*void Surface::AnimatedRotation(double angle, Vector3D translation, PzG::GnuplotLink& link, const string filename)
{

    const int FramesInRotation = 120;
    for (int i = 0;i<FramesInRotation; i++)
    {
      auto temp = angle/FramesInRotation;
      cuboid.GetAngle()=  i*temp;
      cuboid.draw(filename); //najpierw rysujemy obrocony na osi z 
      link.Draw();
      this_thread::sleep_for(chrono::milliseconds(15));
      
    }

}  */