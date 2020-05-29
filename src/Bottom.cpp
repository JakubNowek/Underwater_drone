#include "Bottom.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>

using namespace std;

#define BOTTOM_XO        -70     //wspolrzedna x od ktorej zaczyna sie rysowanie dna
#define BOTTOM_XMAX      300     //wspolrzedna x od ktorej konczy sie rysowanie dna
#define BOTTOM_YO        -70     //wspolrzedna y od ktorej zaczyna sie rysowanie dna
#define BOTTOM_YMAX      300     //wspolrzedna y od ktorej konczy sie rysowanie dna
#define BOTTOM_UNIT_WIDTH_X   25 //szerokosc x elementu siatki 
#define BOTTOM_UNIT_WIDTH_Y   25 //szerokosc y elementu siatki
#define DEPTH_Z   -300           //glebokosc na ktorej znajduje sie dno


Bottom::Bottom(std::string filename) : Surface(filename)
{
    level = DEPTH_Z;
}


/**
 * @brief przeciazenie metody odopwiadajacej za stworzenie dna, robi to umieszczajac w podanym pliku kolejne wspolrzedne punktow dna
 * 
 * @param filename  - nazwa pliku z ktorego chcemy narysowac dno
 */
void Bottom::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

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