#include "Surface.hh"
#include <fstream>
#include <iostream>
#include "RotationMatrix.hh"
#include <cmath>
using namespace std;


/**
 * @brief Construct a new Surface:: Surface object
 * 
 * @param filename - plik z ktorego czytamy bryle
 */
Surface::Surface(const string filename): angle{0}
{   
    ifstream inputFile;
    inputFile.open(filename);
    if(!inputFile.is_open())
    {
        cerr << "Unable to load Surface file!" 
             << endl;
        return;
    }

    Vector3D point;
    while(inputFile >> point)
    {
        points.push_back(point);
    }
    inputFile.close();
    //ustawianie wartosci poczatkowej wektora translacji 
    translation[0] = 0;
    translation[1] = 0;
    translation[2] = 0; 

}

/**
 * @brief metoda zmienia wartosc translacji o wprowadzona wielkosc 
 * 
 * @param change - zmiana translacji 
 */
void Surface::translate(const Vector3D& change)
{
    translation =  translation + change;
}

/**
 * @brief metoda zapisujaca zmienione wspolrzedne bryly do pliku, z ktorego gnuplot bedzie rysowac
 * 
 * @param filename - nazwa pliku do ktorego zaisujemy
 */
void Surface::draw(std::string filename) const
{

    ofstream outputFile;
    outputFile.open(filename);
    if(!outputFile.is_open())
    {
        cerr << "Unable to open drone file!" << endl;
        return;
    }

    RotationMatrix Rotz(angle,'z');
    for(unsigned i = 0; i < points.size(); ++i)
    {
        outputFile << Rotz * points[i] + translation << endl;
        if(i % 4 == 3) // triggers after every 4 points
        {
            outputFile << "#\n\n";
        }
    }
}

/* void Surface::CollisionWaterBottom(Cuboid const cuboid ,Water const water, Bottom const bottom)
{

} */