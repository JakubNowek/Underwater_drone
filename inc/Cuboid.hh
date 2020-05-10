#pragma once

#include <iostream>
#include "SWektor.hh"

/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Cuboid {

  std::vector<Vector3D> Vertices;  //wierzcholki
  public:
  vector<Vector3D> GetVertices() const {return Vertices;}

};


/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
std::ostream& operator << (std::ostream & OStream, const Cuboid & cubo);
