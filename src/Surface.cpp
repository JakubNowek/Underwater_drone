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
void Surface::translate(const Vector3D& change)
{
    translation =  translation + change;
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

    RotationMatrix Rotz(angle);
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << Rotz * points[i] + translation << endl;
        if(i % 4 == 3) // triggers after every 4 points
        {
            outputFile << "#\n\n";
        }
    }
}

