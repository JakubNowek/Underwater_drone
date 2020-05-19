#include "cuboid.hh"


void Cuboid::Rotation(double angle, double frames, const std::string filename)
{
      auto temp1 = angle/frames;
      this->rotate(temp1);
      this->draw(filename);
}