#include "cuboid.hh"


void Cuboid::Anim_Rotation( double angle, double frames, const std::string filename)
{
      auto temp1 = angle/frames;
      this->rotate(temp1);
      this->draw(filename);
}

void Cuboid::Anim_Move(Vector3D translation, double frames,const std::string filename)
{     

      auto temp = translation / frames;
      this->translate(temp); // a tutaj sobie przesuwamy
      this->draw(filename);
}
