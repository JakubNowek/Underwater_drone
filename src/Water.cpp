#include "Water.hh"
#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

#define WATER_XO        -70     //wspolrzedna x od ktorej zaczyna sie rysowanie powierzchni
#define WATER_XMAX      300     //wspolrzedna x od ktorej konczy sie rysowanie powierzchni
#define WATER_YO        -70     //wspolrzedna y od ktorej zaczyna sie rysowanie powierzchni
#define WATER_YMAX      300     //wspolrzedna y od ktorej konczy sie rysowanie powierzchni
#define WATER_UNIT_WIDTH_X   30 //szerokosc x elementu siatki 
#define WATER_UNIT_WIDTH_Y   30 //szerokosc y elementu siatki
#define WATER_LEVEL   -5        //wysokosc na ktorej znajduje sie powierzchnia wody
         

/**
 * @brief  przeciazenie metody odopwiadajacej za stworzenie powierzchni, robi to umieszczajac w podanym pliku kolejne wspolrzedne punktow powierzchni
 * 
 * @param filename - nazwa pliku do ktorego zapisywac bedziemy wspolrzedne powierzchni
 */
void Water::draw(std::string filename) const
{
    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }
    int wave = 10;                                                          // wysokosc fali

    for (int x = WATER_XO;  x < WATER_XMAX; x += WATER_UNIT_WIDTH_X) 
    {
        for (int y = WATER_YO;  y < WATER_YMAX; y += WATER_UNIT_WIDTH_Y ) 
        {
             outputFile << x << " " << " " << y << " "
             <<  WATER_LEVEL + wave << endl;
            
        }
         wave *=-1;                                                         // zapewniamy, ksztalt fali, tworzac grzbiety i depresje
    outputFile << endl;                                                     // Jedna linie zostawiamy wolna
    }
}