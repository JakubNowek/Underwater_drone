#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include "gnuplot_link.hh"
#include "cuboid.hh"
#include "Surface.hh"

#include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 




using namespace std;
const string kDroneFile("solid/drone.dat");
const string kModelFile("solid/model.dat");
int main()
{
    Cuboid cuboid(kModelFile);     
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji
    link.SetRangeX(-40, 300);
    link.SetRangeY(-90, 200);
    link.SetRangeZ(-20, 500);
    link.SetRotationXZ(75,15);
    constexpr double ANG = 720; // tu na szybko jakis kat 
    int FramesInTranslation = 120;
    int FramesInRotation = 720;
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);

    cuboid.draw(kDroneFile);
    link.Draw(); 
    this_thread::sleep_for(chrono::milliseconds(1500));

    Vector3D translation; //wektor translacji
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 50; 
    cuboid.translate(translation); // a tutaj sobie przesuwamy

    //obracanie drona w animacji 
    for (int i = 0;i<FramesInRotation; i++)
    {
      auto temp1 = ANG/FramesInRotation;
      cuboid.rotate(temp1);
      cuboid.draw(kDroneFile);
      link.Draw();
      this_thread::sleep_for(chrono::milliseconds(15));
    }
    
     //link.Draw(); // <- Tutaj gnuplot rysuje, to co zapisaliśmy do pliku
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); 
    return 0;
}
