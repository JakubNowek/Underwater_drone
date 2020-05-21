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

#include "RotationMatrix.hh"

#include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 




using namespace std;
const string kDroneFile("solid/drone.dat");
const string kModelFile("solid/model.dat");
const string kBottomFile("solid/bottom.dat");
const string kWaterFile("solid/water.dat");
int main()
{
    Cuboid cuboid(kModelFile);  
    Bottom bottom(kBottomFile);
    Water water(kWaterFile);
    Vector3D translation; //wektor translacji
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji
    double distance, movementAngle; //odleglosc i kat wznoszenia/opadania podane przez uzytkownika
    char choice[2] = " "; //tablica znakow zapisujaca wybor uzytkownika
    link.SetRangeX(-70, 300);
    link.SetRangeY(-70, 300);
    link.SetRangeZ(-300, 70);
    link.SetRotationXZ(60,15);
    double ANG = 0; //kat podany przez uzytkownika
    constexpr int FramesInTranslation = 120;//liczba kltek w animacji przesuniecia
    constexpr int FramesInRotation = 120;//liczba klatek w animacji obrotu
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kBottomFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kWaterFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);
    // a tutaj sobie przesuwamy, zeby zaczac w sensownym miejscu (nie na dnie i nie przy powierzchni)
    RotationMatrix m(-45 +ANG);
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 0; 
    cuboid.translate(translation);
    //tu sie zaczyna rysowanie
    bottom.draw(kBottomFile);
    cuboid.draw(kDroneFile);
    water.draw(kWaterFile);
    link.Draw(); 
    int FLAGA = 0; //zlicza ile zostalo wykonanych operacji obrotu i przekazuje te informacje do funkcji translacji
cout << "Witaj kierowco drona!\n";
 while (choice[0] != 'Q') 
    {   

        cout << "\nCo chcesz teraz zrobic? :\n"; 
        cout << "  1 - Obrot  \n";
        cout << "  2 - Przemiesc sie  \n";
        cout << "  Q - Katapulta (szybkie wysiadanie) \n";
        cout << "Twoj wybor: ";
        cin >> choice;
        cout << "\nWybrales opcje \n"<<choice[0];

        switch (choice[0]) 
        {   
            case '1': cout<<"podaj kat:  ";
                      cin>>ANG;
                      cout<<endl;
                      m = m.AddAngle(-45+ANG);
                      //obracanie drona w animacji//
                      for (int i = 0;i<FramesInRotation; i++)
                      {
                        cuboid.Anim_Rotation(ANG,FramesInRotation,kDroneFile);
                        link.Draw();
                        this_thread::sleep_for(chrono::milliseconds(15));
                      }
                      FLAGA +=1;
                      ; break;     
            case '2': cout<<"podaj odleglosc :  ";
                      cin>>distance;
                      cout<<endl;
                      cout<<"podaj kat :  ";
                      cin>>movementAngle;
                      cout<<endl;
                      translation[0] = distance*sqrt(2)/2;
                      translation[1] = distance*sqrt(2)/2;
                      translation[2] = distance*tan(movementAngle*M_PI/180); 
                      //translacja w animacji//
                      m = m.AddAngle(-45+ANG*FLAGA);
                      translation = m*translation;   
                      for (int i = 0;i<FramesInTranslation; i++)
                      {
                        cuboid.Anim_Move(translation,FramesInTranslation,kDroneFile);
                        link.Draw();
                        this_thread::sleep_for(chrono::milliseconds(10));
                      } 
            case 'Q': cout <<endl<<"Wysiadka BULWO"<<endl; break;
            default : cout << "NIEROZPOZNANO"<<endl; break;
        }
    } 

    //this_thread::sleep_for(chrono::milliseconds(1000));

//cin.ignore(100000, '\n'); 



  
   /*  cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n');
    cin.ignore(100000, '\n');  */
}



      
   