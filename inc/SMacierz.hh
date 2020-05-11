#ifndef SMACIERZ_HH
#define SMACIERZ_HH

#include "rozmiar.hh"
#include <iostream>
#include "SWektor.hh"
//#include "LZespolona.hh"
/*
 *  Klasa ta modeluje pojecie macierzy
 * metody tej klasy to funkcje odpowiadajace za wypelnianie macierzy oraz pobieranie z niej danego elementu
 */
template <typename STyp, int SWymiar>
class SMacierz {

SWektor<STyp,SWymiar> _Kolumna[ROZMIAR];
/**********naglowki metod***********/
  public:
  SMacierz ();/* Konstruktor bezparametryczny */

  /* przeciazenia operatora [], dzieki ktorym mamy dostep do chronionych danych klasy, ktore pozwalaja kolejno na wypisywanie i wpisywanie danych do macierzy 
   * [in] - numer kolumny 
   * [out] - kolumna macierzy */
  SWektor<STyp,SWymiar> operator [] (unsigned int Kol) const {return _Kolumna[Kol];} 
  SWektor<STyp,SWymiar>& operator [] (unsigned int Kol) {return _Kolumna[Kol];}

  /* przeciazenia operatora (), dzieki ktorym mamy dostep do chronionych danych klasy, ktore pozwalaja kolejno na wypisywanie i wpisywanie danych do macierzy 
   * [in] - wspolrzedne pozadanego elementu macierzy
   * [out] - element macierzy o podanych wspolrzednych */
  STyp operator () (unsigned int Wrsz,unsigned int Klmn) const  {return _Kolumna[Klmn][Wrsz];}
  STyp operator () (unsigned int Wrsz,unsigned int Klmn) {return _Kolumna[Klmn][Wrsz];}

  /* Metoda oblicza wyznacznik macierzy
   * [in] - macierz
   * [out] - wyznacznik macierzy*/
  STyp Wyznacznik() const ;

  /* Metoda zamienia wybrane kolumny macierzy
   * [in] - macierz, indeks kolumny ktora chcemy zmienic, wektor ktory chcemy wstawic do macierzy
   * [out] - macierz z zamieniona kolumna*/
  SMacierz<STyp,SWymiar> ZamienKolumny(int IndK1, SWektor<STyp,SWymiar> Wek) const;

   /* Metoda transponuje macierz
   * [in] - macierz, ktora chcemy transponowac
   * [out] - macierz transponowana*/
  SMacierz<STyp,SWymiar> const Transpozycja();

   /* przeciazenie operatora* dla macierzy
   * [in] - macierze ktore chcemy wymnozyc
   * [out] - macierz wynikowa*/
  SMacierz<STyp,SWymiar> operator* (const SMacierz<STyp,SWymiar>& B) const;

	/* mnozenie macierz*wektor */
	SWektor<STyp,SWymiar> operator* (const SWektor<STyp,SWymiar>& B) ;


   /* przeciazenie operatora =  dla macierzy
   * [in] - macierz ktora chcemy przypisac
   * [out] - macierz doktorej przypisalismy*/
  SMacierz<STyp,SWymiar> operator = ( const SMacierz<STyp,SWymiar>& B);

};
/////////////////////////////////////////////////////////////////////////////metody rozwinięte/////////////////////////////////////////////////////////////////////////////

/* Konstruktor bezparametryczny */
template <typename STyp, int SWymiar>
SMacierz<STyp,SWymiar> :: SMacierz ()
{
    SWektor<STyp,SWymiar> W[ROZMIAR];
    for(int i = 0; i < ROZMIAR; ++i)
    {
        for (int j = 0; j < ROZMIAR; ++j)
        W[i][j] = 0;
        _Kolumna[i] = W[i];
    }

}

/* Przeciazenie operatora wejscia - funkcja wypelnia macierz Mac
 * [in] 
 * istream &Strm - przekazanie poprzez referencje strumiena wejscia
 * Macierz &Mac - przekazanie poprzez referenje macierzy, do ktorej zapisane zostana dane z wejscia
 * [out]
 * funkcja zwraca strumien wejscia */

template <typename STyp, int SWymiar>
std::istream& operator >> (std::istream &Strm, SMacierz<STyp,SWymiar> &Mac)
{
    SWektor<STyp,SWymiar> W[ROZMIAR];
    for(int Ind = 0; Ind < ROZMIAR; ++Ind)
    {
       
            Strm >> W[Ind];
            Mac[Ind] = W[Ind];
    }
    return Strm;
}

/* Przeciazenie operatora wyjscia - funkcja wyswietla macierz Mac
 * [in] 
 * ostream &Strm - przekazanie poprzez referencje strumiena wyjscia
 * Macierz &Mac - przekazanie poprzez referenje macierzy, ktora ma zostac wyswietlona na wyjsciu
 * [out]
 * funkcja zwraca strumien wyjscia */
template <typename STyp, int SWymiar>
std::ostream& operator << (std::ostream &Strm, const SMacierz<STyp,SWymiar> &Mac)
{
    Strm << " "<< std::endl;
    for(int i = 0; i < ROZMIAR; ++i)
    {
        for (int j = 0; j < ROZMIAR; ++j)
        {
           Strm.width(4);
           Strm << Mac[i][j]<< " ";
        }
       
       Strm << std::endl;
    }
    return Strm;
}

/* transpozycja */
/* Metoda transponuje macierz
   * [in] - macierz, ktora chcemy transponowac
   * [out] - macierz transponowana*/
template <typename STyp, int SWymiar>
const SMacierz<STyp,SWymiar> SMacierz<STyp,SWymiar>::Transpozycja()
{
    SMacierz<STyp,SWymiar> Pom;
    for(int i = 0; i < ROZMIAR; ++i)
    {
        for (int j = 0; j < ROZMIAR; ++j)
        {
            Pom[i][j] = (*this)[j][i];

        }
    }
    return Pom;

}

/* zamiana kolumn */
/* Metoda zamienia wybrane kolumny macierzy
   * [in] - macierz, indeks kolumny ktora chcemy zmienic, wektor ktory chcemy wstawic do macierzy
   * [out] - macierz z zamieniona kolumna*/
template <typename STyp, int SWymiar>
SMacierz<STyp,SWymiar> SMacierz<STyp,SWymiar>::ZamienKolumny(int IndK1, SWektor<STyp,SWymiar> Wek) const
{
    SMacierz<STyp,SWymiar> Pom;
    Pom = (*this);

    Pom[IndK1] = Wek;
     return Pom;
}

/* mnozenie macierzy */
/* przeciazenie operatora* dla macierzy
   * [in] - macierze ktore chcemy wymnozyc
   * [out] - macierz wynikowa*/
template <typename STyp, int SWymiar>
SMacierz<STyp,SWymiar> SMacierz<STyp,SWymiar>::operator*( const SMacierz<STyp,SWymiar>& B) const
{  
    SMacierz<STyp,SWymiar> Pom;
    Pom = (*this).Transpozycja();
    SMacierz<STyp,SWymiar> WynikMnoz;

    for(int i = 0; i < ROZMIAR; ++i)
    {
        for (int j = 0; j < ROZMIAR; ++j)
        {

            WynikMnoz[i][j] = Pom[i]*B[j];
        }
    }
    return WynikMnoz;
}
/* macierz * wektor */
template <typename STyp, int SWymiar>
SWektor<STyp,SWymiar> SMacierz<STyp,SWymiar>::operator* (const SWektor<STyp,SWymiar>& B) 
{
	SMacierz<STyp,SWymiar> Pom;
    Pom = (*this).Transpozycja();
    SWektor<STyp,SWymiar> WynikMnoz;

    for(int i = 0; i < ROZMIAR; ++i)
    {
	    WynikMnoz[i] = Pom[i]*B;
    }
    return WynikMnoz;
}

/* przypisanie macierzy */
/* przeciazenie operatora przypisania dla macierzy
   * [in] - macierze ktore chcemy przypisac, macierz do ktorej przypisujemy
   * [out] - macierz do ktorej przypisujemy*/ 
template <typename STyp, int SWymiar>
SMacierz<STyp,SWymiar> SMacierz<STyp,SWymiar>::operator = ( const SMacierz<STyp,SWymiar>& B)
{  

    for(int i = 0; i < ROZMIAR; ++i)
    {
        for (int j = 0; j < ROZMIAR; ++j)
        {

            (*this)[i][j] = B[i][j];
        }
    }
    return (*this);
}

/* wynacznik */
/* Metoda oblicza wyznacznik macierzy
 * [in] - macierz
 * [out] - wyznacznik macierzy*/
template <typename STyp, int SWymiar>
STyp SMacierz<STyp,SWymiar>::Wyznacznik() const
{
    
    STyp det;
    SMacierz<STyp,SWymiar> Pom;
    Pom = (*this);
    for (int i = 0; i < ROZMIAR - 1; ++i)
    {
        for (int j = i + 1; j < ROZMIAR; ++j)
        {
            for (int k = i + 1; k < ROZMIAR; ++k)
            {
                //std::cout <<" przed "<<Pom[j][k]<<std::endl;
              
                Pom[j][k] -= ( Pom[j][i] / Pom[i][i] ) * Pom[i][k];
                //std::cout <<" po "<<Pom[j][k]<<std::endl;
            }
        }    
    }
    det = Pom[0][0];
    for (int i = 0; i < ROZMIAR-1; ++i)
    {
        /* std::cout <<"ile wynosi wyznacznik?:  "<<det<<std::endl;  */
        /* std::cout <<"przec co mnożymy wyznacznik:  "<<Pom[i][i]<<std::endl;  */
        det *= Pom[i+1][i+1];
        /* std::cout <<"ile potem  wynosi?:  "<<det<<std::endl; */ 
        /* std::cout <<"i:  "<<i<<std::endl;  */
    }
    //std::cout<<"det  : "<<det<<std::endl;
    return det; 
}
 




#endif
