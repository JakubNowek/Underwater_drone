#include "Water.hh"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

#define WATER_XO        -70
#define WATER_XMAX      300
#define WATER_YO        -70
#define WATER_YMAX      300
#define WATER_UNIT_WIDTH_X   30
#define WATER_UNIT_WIDTH_Y   30
#define WATER_LEVEL   -5
void Water::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }
    int wave = 10;
    //RotationMatrix Rotz((*this).angle);

    for (int x = WATER_XO;  x < WATER_XMAX; x += WATER_UNIT_WIDTH_X) 
    {
        for (int y = WATER_YO;  y < WATER_YMAX; y += WATER_UNIT_WIDTH_Y ) 
        {
             outputFile << x << " " << " " << y << " "
             <<  WATER_LEVEL + wave << endl;
            
        }
         wave *=-1;
    outputFile << endl;  // Jedna linie zostawiamy wolna
    }
}