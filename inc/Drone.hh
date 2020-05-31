/*#pragma once

#include "cuboid.hh"
#include "Propeller.hh"

 class Drone 
{
    Cuboid body(std::string bodyName);
    Propeller lRotor(std::string lName), rRotor(std::string rName); 
    public:
    Drone (std::string bodyName,std::string lName,std::string rName);
   // Cuboid& getCuboid(Cuboid a) { body = a;}
   // Propeller& getLPropeller(Propeller l) {lRotor = l;}
   // Propeller& getRPropeller(Propeller r) {lRotor = r;} 
    void draw(std::string bodyName,std::string lName,std::string rName) const;
    void Anim_Rotation(double angle, double frames,const std::string bodyName,const std::string lName,const std::string rName);
    void Anim_Move(Vector3D translation,double velocity, double frames,const std::string bodyName,const std::string lName,const std::string rName);
    
}; */