#include "cuboid.hh"

/**
 * @brief rozwiniecie metody odpoiwadajacej za animowanie ruchu obracania.
 * Miara kata obrotu dzielona jest na ilosc klatek w animacji.
 * Nastepnie do pliku z ktorego bedzie czytal gnuplot zapisywany jest "obraz" bryly obroconej o ten maly kat
 * Funkcja wykonana wielokrotnie powoduje wrazenie ruchu bryly 
 * 
 * @param angle - kat o ktory obracamy bryle 
 * @param frames - liczba klatek w animacji 
 * @param filename - nazwa pliku do ktorego zapisujemy obrocona o maly kat bryle 
 */
void Cuboid::Anim_Rotation( double angle, double frames, const std::string filename)
{
      auto temp1 = angle/frames;
      this->rotate(temp1);
      this->draw(filename);
}

/**
 * @brief rozwiniecie metody odpoiwadajacej za animowanie ruchu.
 * Calkowite przesuniecie dzielone jest na ilosc klatek w animacji.
 * Nastepnie do pliku z ktorego bedzie czytal gnuplot zapisywany jest "obraz" bryly przesunietej o te mala odleglosc
 * Funkcja wykonana wielokrotnie powoduje wrazenie ruchu bryly 
 * 
 * @param translation - wektor przesuniecia
 * @param frames  - liczba klatek w animacji
 * @param filename - nazwa pliku do ktorego zapisujemy przesunieta o niewielka odleglosc bryle 
 */
void Cuboid::Anim_Move(Vector3D translation, double frames,const std::string filename)
{     

      auto temp = translation / frames;
      this->translate(temp); // a tutaj sobie przesuwamy
      this->draw(filename);
}

int Cuboid::WBcollision(double wl, double bl)
{
   for(unsigned int i = 0;i<points.size(); ++i )
   {
      if(points[i][2] == wl)
      {
            std::cout<< "Wyplynales ponad powierzchnie, dalszy ruch niemozliwy, opuszczaie drona" <<std::endl;
            /* exit(0); */
            return 1;
      }
      else if(points[i][2] == bl)
      {
            std::cout<< "Nastapilo zderzenie z dnem, krytyczne uszkodzenia, dalszy ruch niemozliwy, opuszczaie drona" <<std::endl;
            /* exit(0); */
            return 1;
      }
   }   
}