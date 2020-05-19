#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include "gnuplot_link.hh"
#include "Surface.hh"
#include "cuboid.hh"
#include "Bottom.hh"
#include "Water.hh"

#include "RotationMatrix.hh"///////////////////inaczej jakos nie tu to

#include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 




using namespace std;
const string kDroneFile("solid/drone.dat");
const string kModelFile("solid/model.dat");
const string kBottomFile("solid/bottom.dat");//////////aaaaa nie zapomniec dodac
const string kWaterFile("solid/water.dat");
int main()
{
    Cuboid cuboid(kModelFile);  
    Bottom bottom(kBottomFile);
    Water water(kWaterFile);
    Vector3D translation; //wektor translacji
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji

    link.SetRangeX(-70, 300);
    link.SetRangeY(-70, 300);
    link.SetRangeZ(-300, 70);
    link.SetRotationXZ(0,0);
    constexpr double ANG = 90; // tu na szybko jakis kat 
    int FramesInTranslation = 120;
    int FramesInRotation = 120;
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kBottomFile.c_str(), PzG::LS_CONTINUOUS, 1);
    //link.AddFilename(kWaterFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);

//tu sie zaczyna rysowanie
    bottom.draw(kBottomFile);
    cuboid.draw(kDroneFile);
   // water.draw(kWaterFile);
    link.Draw(); 
 // a tutaj sobie przesuwamy, zeby zaczac w sensownym miejscu (nie na dnie i nie przy powierzchni)
    RotationMatrix m(45+ANG);
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 50; 
    cuboid.translate(translation);
    //this_thread::sleep_for(chrono::milliseconds(1000));



    //obracanie drona w animacji 
    for (int i = 0;i<FramesInRotation; i++)
    {
      cuboid.Anim_Rotation(ANG,FramesInRotation,kDroneFile);
      link.Draw();
      this_thread::sleep_for(chrono::milliseconds(15));
    }
    
    translation[0] = 70;
    translation[1] = 70;
    translation[2] = 70; 
      //translacja w animacji

    translation = m*translation;   
    for (int i = 0;i<FramesInTranslation; i++)
    {
      cuboid.Anim_Move(translation,FramesInTranslation,kDroneFile);
      link.Draw();
      this_thread::sleep_for(chrono::milliseconds(10));
    }


  
    cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n'); 
    return 0;
}
