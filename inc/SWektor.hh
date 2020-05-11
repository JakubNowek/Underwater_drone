#ifndef SWEKTOR_HH
#define SWEKTOR_HH


#include <iostream>
//#include "LZespolona.hh"
#include <cstdlib>
#include <cmath>
#include "rozmiar.hh"

template <typename STyp, int SWymiar>
class SWektor {
    STyp  _Wsp[SWymiar];
  public:
    SWektor() { for (STyp &Wsp: _Wsp) Wsp = 0; }
  
    STyp  operator [] (unsigned int Ind) const { return _Wsp[Ind]; }
    STyp &operator [] (unsigned int Ind)       { return _Wsp[Ind]; }

    SWektor<STyp,SWymiar> operator + (const SWektor<STyp,SWymiar> &W1) const;
    SWektor<STyp,SWymiar> operator - (const SWektor<STyp,SWymiar> &Odjemnik) const;
    SWektor<STyp,SWymiar> operator * (double Mnoznik) const;
    STyp operator * (const SWektor<STyp,SWymiar> &W1) const;
    SWektor<STyp,SWymiar> operator / ( double liczba) const;
    STyp Dlugosc() const;
};

/* Przeciazenie strumienia wyjscia */
/* Przeciazenie operatora wyjscia - funkcja wyswietla wekor Wek
 * [in] 
 * ostream &Strm - przekazanie poprzez referencje strumiena wyjscia
 * Wektor &Wek - przekazanie poprzez referenje wektora, ktory ma zostac wyswietlona na wyjsciu
 * [out]
 * funkcja zwraca strumien wyjscia
 */
template <typename STyp, int SWymiar>
std::ostream& operator << (std::ostream &StrmWyj, const SWektor<STyp,SWymiar>& W)
{
  for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) {
    StrmWyj << " " << W[Ind];
  }  
  return StrmWyj;
}

/* Przeciazenie operatora wejscia */
/* Przeciazenie operatora wejscia - funkcja wypelnia wekor Wek
 * [in] 
 * istream &Strm - przekazanie poprzez referencje strumiena wejscia
 * Wektor &Wek - przekazanie poprzez referenje wektora, do ktorego zapisane zostana dane z wejscia
 * [out]
 * funkcja zwraca strumien wejscia
 */
template <typename STyp, int SWymiar>
std::istream& operator >> (std::istream &Strm, SWektor<STyp,SWymiar> &Wek)
{
    for(int Ind = 0; Ind < ROZMIAR; ++Ind)
    {
        Strm >> Wek[Ind];
    }
    return Strm;
}

/* Przeciazenie operatora dodawania */
/* przeciazenie operatora dodawania dwoch wektorow 
 * [in]
 * const Wektor & W1, W2 - wektory ktore chcemy dodac
 * [out] 
 * Zwraca wektor wynikowy
*/
template <typename STyp, int SWymiar>
SWektor<STyp,SWymiar> SWektor<STyp,SWymiar>::operator + (const SWektor<STyp,SWymiar> &W1) const
{
    SWektor<STyp,SWymiar> Wynik;
    for(int Ind = 0; Ind < ROZMIAR; ++Ind)
    {
       Wynik[Ind] = (*this)[Ind] +  W1[Ind]; 
    }
    return Wynik;
}
/* Przeciazenie operatora odejmowania */
/* przeciazenie operatora odejmowania dwoch wektorow 
 * [in]
 * const Wektor & W1, W2 - wektory ktore chcemy odjac
 * [out] 
 * Zwraca wektor wynikowy
*/
template <typename STyp, int SWymiar>
SWektor<STyp,SWymiar> SWektor<STyp,SWymiar>::operator - (const SWektor<STyp,SWymiar> &Odjemnik) const
{
  SWektor<STyp,SWymiar>  Wynik;

  for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) Wynik[Ind] = (*this)[Ind] - Odjemnik[Ind];
  return Wynik;
}

/* Przeciazenie operatora mnozenia wektora przez liczbe calkowita */
/* przeciazenie operatora mnozenia wektora przez liczbe 
 * [in] - wektor i liczba przec ktora mnozymy
 * const Wektor & W1
 * double liczba 
 * [out] 
 * Zwraca wektor wynikowy
*/
template <typename STyp, int SWymiar>
SWektor<STyp,SWymiar> SWektor<STyp,SWymiar>::operator * (double Mnoznik) const
{
  SWektor<STyp,SWymiar>  Wynik;

  for (unsigned int Ind = 0; Ind < SWymiar; ++Ind) Wynik[Ind] = (*this)[Ind]*Mnoznik;
  return Wynik;  
}

/* Mnożenie skalarne wektorów */
/* przeciazenie operatora mnozenia skalarnego dwoch wektorow 
 * [in]
 * const Wektor & W1, W2 - wektory ktore chcemy pomnozyc
 * [out] 
 * Zwraca wynik iloczynu skalarnego - liczbe typu double 
*/
template <typename STyp, int SWymiar>
STyp SWektor<STyp,SWymiar>::operator * (const SWektor<STyp,SWymiar> &W1) const
{
    STyp Wynik;
    Wynik = 0;
    for(int Ind = 0; Ind < ROZMIAR; Ind ++)
    {
       Wynik += (*this)[Ind] *  W1[Ind]; 
    }
    return Wynik;
}

/* Dzielenie wektora przez liczbe */
/* przeciazenie operatora dzielenia wektora przez liczbe 
 * [in] - wektor i liczba przec ktora dielimy
 * const Wektor W1
 * [out] 
 * Zwraca dlugosc wektora
*/
template <typename STyp, int SWymiar>
SWektor<STyp,SWymiar> SWektor<STyp,SWymiar>::operator / (double liczba) const
{
    if ((int) liczba == 0 )
    {
        std::cerr << " Blad - dzielenie przez zero " << std::endl;
        exit(0);
    }
    SWektor<STyp,SWymiar> Wynik;
    for(int Ind = 0; Ind < ROZMIAR; Ind ++)
    {
       Wynik[Ind] = (*this)[Ind] / liczba; 
    }
    return Wynik;
}

/* Dlugosc wektora */
/* Metoda obliczajaca dlugosc  
 * [in]
 * const Wektor & W1, W2 - wektory ktore chcemy pomnozyc
 * [out] 
 * Zwraca wynik iloczynu skalarnego - liczbe typu double 
*/
template <typename STyp, int SWymiar>
STyp SWektor<STyp,SWymiar>::Dlugosc() const
{
    double dl = 0, podp = 0;
    for(int Ind = 0; Ind<ROZMIAR; ++Ind)
    {
        podp += pow((*this)[Ind],2);
    }
    dl = sqrt(podp);
    return dl;
}


#endif
