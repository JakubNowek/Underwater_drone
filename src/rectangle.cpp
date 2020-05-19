#include "rectangle.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>

using namespace std;

#define BOTTOM_XO        -20
#define BOTTOM_XMAX      300
#define BOTTOM_YO        -20
#define BOTTOM_YMAX      300
#define BOTTOM_UNIT_WIDTH_X   10
#define BOTTOM_UNIT_WIDTH_Y   10
#define DEPTH_Z   -300
void Rectangle::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

    //RotationMatrix Rotz((*this).angle);

    for (int x = BOTTOM_XO;  x < BOTTOM_XMAX; x += BOTTOM_UNIT_WIDTH_X) 
    {
        for (int y = BOTTOM_YO;  y < BOTTOM_YMAX; y += BOTTOM_UNIT_WIDTH_Y ) 
        {
             outputFile << x << " " << " " << y << " "
             <<  DEPTH_Z << endl;
        }
    outputFile << endl;  // Jedna linie zostawiamy wolna
    }
}