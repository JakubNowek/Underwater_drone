#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


#include "Cuboid.hh"
#include "SWektor.hh"
#include "gnuplot_link.hh"


using namespace std;
using Vector3D = SWektor<double,3>;

int main ()
{
	char c;
	Cuboid cubo;   // To tylko przykladowe definicje zmiennej
	PzG::GnuplotLink  Link;
	Link.SetDrawingMode(PzG::DM_3D);

	








	cout << "Nacisnij ENTER, aby zakonczyc ... " << flush;
	cin >> noskipws >> c;
}
