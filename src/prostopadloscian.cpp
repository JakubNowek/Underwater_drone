#include <iostream>
#include "prostopadloscian.hh"
#include <iomanip>


/* std::ostream& operator << (std::ostream & OStream, const Prostopadloscian & Prost)
{
    for(unsigned i = 0; i<cubo.get_punkty().size(); ++i)
    {
        OStream<< " " <<cubo.get_punkty()[i] << std::endl;
    }
    return OStream;
} */

std::ostream& operator << (std::ostream& StrmWyj, const Prostopadloscian &Prost )
{
   std::vector<Wektor3D> pom = Prost.get_punkty();
	
   for(unsigned int i = 0 ; i<pom.size(); ++i)
	{
		StrmWyj <</*  std::setw(16) << std::fixed << std::setprecision(10)<< */ pom[i] << std::endl;
	}
   	StrmWyj << *pom.end();
   return StrmWyj;      
                             // Jeszcze raz zapisujemy pierwszy punkt,
                             // aby gnuplot narysowal zamkniętą linię.
}
