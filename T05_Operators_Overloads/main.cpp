#include <iostream>
#include "Vector2D.h"


int main()
{
   Vector2D vect(5, 3);
   Vector2D vect2(1, 1);
   vect.print();

   vect.print();
   vect2.print();

   vect += vect2;
   vect.print();

   vect = vect + vect;
   vect.print();

   vect -= vect2;
   vect.print();

   Vector2D vect3;
   vect3 = vect = vect2;
   vect3.print();

   vect3 = vect * 3;
   vect3.print();

   vect3 *= 2;
   vect3.print();

   //Function testing
   std::cout << std::endl << "Magnitude (1.41421): ";
   Vector2D mag(1, 1);
   std::cout << mag.magnitude() << std::endl;

   std::cout << "Normalise (0.7071, 0.07071): ";
   Vector2D normal(1, 1);
   normal.normalise();
   normal.print();

   std::cout << "Angle (90): ";
   Vector2D ang1(1, 0);
   Vector2D ang2(0, 1);
   std::cout << ang1.angle(ang2) << std::endl;

   std::cout << "Distance (5): ";
   Vector2D dist1(0,3);
   Vector2D dist2(4, 0);
   std::cout << dist1.distance(dist2) << std::endl;

}
