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
#include "Propeller.hh"
#include "RotationMatrix.hh"

#include <chrono> //te dwie biblioteki sa od opznienia w animacji
#include <thread> 




using namespace std;
const string kDroneFile("solid/drone.dat");
const string kModelFile("solid/model.dat");
const string kBottomFile("solid/bottom.dat");
const string kWaterFile("solid/water.dat");
const string kPrismFile("solid/granx.dat");
const string kLPropellerFile("solid/Lpropeller.dat");
const string kRPropellerFile("solid/Rpropeller.dat");
int main()
{
    Cuboid cuboid(kModelFile);  
    Propeller lpropeller(kPrismFile), rpropeller(kPrismFile);////na razie jeden aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
    Bottom bottom(kBottomFile);
    Water water(kWaterFile);
    Vector3D translation, test; //wektor translacji
    PzG::GnuplotLink link; // Ta zmienna jest potrzebna do wizualizacji
    double distance, movementAngle; //odleglosc i kat wznoszenia/opadania podane przez uzytkownika
    char choice[2] = " "; //tablica znakow zapisujaca wybor uzytkownika
    link.SetRangeX(-70, 300);
    link.SetRangeY(-70, 300);
    link.SetRangeZ(-300, 70);
    link.SetRotationXZ(60,15);
    link.SetScaleXZ(1.5,1);
    double change = 0; //kat podany przez uzytkownika
    constexpr int FramesInTranslation = 120;//liczba kltek w animacji przesuniecia
    constexpr int FramesInRotation = 120;//liczba klatek w animacji obrotu
    link.Init();
    link.AddFilename(kDroneFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kBottomFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kWaterFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kLPropellerFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.AddFilename(kRPropellerFile.c_str(), PzG::LS_CONTINUOUS, 1);
    link.SetDrawingMode(PzG::DM_3D);
    // a tutaj sobie przesuwamy, zeby zaczac w sensownym miejscu (nie na dnie i nie przy powierzchni)
    RotationMatrix m(-45 +change,'z');
    translation[0] = 50;
    translation[1] = 50;
    translation[2] = 0;   
    cuboid.translate(translation);
//rozmieszczanie srob   
    test[0] = 50;
    test[1] = 50;
    test[2] = 7;
    lpropeller.translate(test);
    test[0] = 50;
    test[1] = 50;
    test[2] = 30;
    rpropeller.translate(test);

    //tu sie zaczyna rysowanie
    bottom.draw(kBottomFile);
    cuboid.draw(kDroneFile);
    water.draw(kWaterFile);
    lpropeller.draw(kLPropellerFile);
    rpropeller.draw(kRPropellerFile);
    link.Draw(); 
//menu   
    cout << endl << endl << "Witaj kierowco drona!" << endl;
    while (choice[0] != 'Q') 
    {   

        cout << "\nCo chcesz teraz zrobic? :" << endl; 
        cout << "  1 - Obrot  " << endl;
        cout << "  2 - Przemiesc sie  " << endl;
        cout << "  Q - Katapulta (szybkie wysiadanie) " << endl;
        cout << "Twoj wybor: ";
        cin >> choice[0];
        cout << endl <<"Wybrales opcje: "<<choice[0] << endl;
        
        switch (choice[0]) 
        {   
            case '1': cout << "Podaj kat:  ";
                      cin >>change;
                      cout << endl;
                      //obracanie drona w animacji//
                      for (int i = 0;i<FramesInRotation; i++)
                      {
                        cuboid.Anim_Rotation(change,FramesInRotation,kDroneFile);
                        lpropeller.Anim_Rotation(change,FramesInRotation,kLPropellerFile);
                        rpropeller.Anim_Rotation(change,FramesInRotation,kRPropellerFile);
                        link.Draw();
                        this_thread::sleep_for(chrono::milliseconds(15));
                      }
                       break;     
            case '2': cout << "Podaj odleglosc :  ";
                      cin >> distance;
                      cout<<endl;
                      cout << "Podaj kat :  ";
                      cin >> movementAngle;
                      cout << endl;
                      translation[0] = distance*sqrt(2)/2;
                      translation[1] = distance*sqrt(2)/2;
                      translation[2] = distance*tan(movementAngle*M_PI/180); 
                      //translacja w animacji//
                      m = m.AddAngle(-45+cuboid.Angle(),'z');
                      translation = m*translation;   
                      for (int i = 0;i<FramesInTranslation; i++)
                      {
                        cuboid.Anim_Move(translation,FramesInTranslation,kDroneFile);
                        lpropeller.Anim_Move(translation,FramesInTranslation,kLPropellerFile);
                        rpropeller.Anim_Move(translation,FramesInTranslation,kRPropellerFile);
                        link.Draw();
                        this_thread::sleep_for(chrono::milliseconds(10));
                      } 
            case 'Q': cout <<endl<<"Wysiadka BULWO"<<endl;
                      cin.ignore(100000, '\n');  break;
            
            default : cout << "NIEROZPOZNANO"<<endl;
                      cin.ignore(100000, '\n');  break;
        }
    } 

    //this_thread::sleep_for(chrono::milliseconds(1000));

//cin.ignore(100000, '\n'); 



  
   /*  cout << "Naciśnij ENTER, aby kontynuowac" << endl;
    cin.ignore(100000, '\n');
    cin.ignore(100000, '\n');  */
}



      
   