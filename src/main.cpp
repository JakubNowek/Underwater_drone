#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include "gnuplot_link.hh"
#include "cuboid.hh"

 #include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 




using namespace std;
const string kDroneFile("solid/drone.dat");

int main()
{
    Cuboid cuboid;        // To tylko przykladowe definicje zmiennej
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji
    link.SetRangeX(-40, 300);
    link.SetRangeY(-90, 200);
    link.SetRangeZ(-20, 500);
    link.SetRotationXZ(75,15);
    constexpr double ANG = M_PI/4; // tu na szybko jakis kat 
    int FramesInTranslation = 120;
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);

 /*    cuboid.draw(kDroneFile);


    link.Draw(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n');  

    cuboid.GetAngle() = ANG;
    cuboid.draw(kDroneFile); //najpierw rysujemy obrocony na osi z */

    cuboid.GetAngle() = ANG;
    Vector3D translation;
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 50; 

    for (int i = 0;i<FramesInTranslation; i++)
    {
      auto temp = translation / FramesInTranslation;
      cuboid.translate(temp); // a tutaj sobie przesuwamy
      this_thread::sleep_for(chrono::milliseconds(10));
      cuboid.draw(kDroneFile);
      link.Draw();
    }

    
    


     //link.Draw(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); 
/* RotationMatrix Radek;
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
 */
    return 0;
}
