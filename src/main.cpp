#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "gnuplot_link.hh"
#include "cuboid.hh"

using namespace std;
const string kDroneFile("solid/drone.dat");

int main()
{
    /* Cuboid cuboid;        // To tylko przykladowe definicje zmiennej
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji

    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);

    cuboid.draw(kDroneFile);


    link.Draw(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); */


   /*  Vector3D translation;
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 50; */

    //cuboid.translate(translation);
    //cuboid.draw(kDroneFile);


    /* link.Draw(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); */ 
RotationMatrix Radek;
Vector3D Andrzej;
  for (int i = 0; i<3;++i)
  {
    for (int j = 0; j<3;++j)         // tutaj szybkie 2 macierze do sprawdzania mnozenia
    {
        Radek[i][j] = i+4*j;
        Andrzej[i] = 2*i-j;
    }
  }
  cout<<"radziu "<<endl<<Radek <<endl<<"Andrzejek"<<endl<< Andrzej<<endl;
  cout << "iloczyn" << endl<< Radek*Andrzej<<endl;

    return 0;
}
