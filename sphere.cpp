/*
* @author Matthew Clayton
* @date 24 October 2016
* @assign.ment H5 Class Practice: Classes and Functions
* @descrip.tion
* This file contains the first class of the H5 assignment for EECE1080C.
* This file contains a solution to finding the surface area and volume of a
* sphere.
*
* Note: I tried to do this fairly quickly, I did not account for memory
* management or efficiency. Additionally, I did not account for radii that do
* not make sense (i.e. negative radii).
*/

#define _USE_MATH_DEFINES
#include <math.h> // to get value of pi, use pow
#include <iostream>
using namespace std;

class Sphere {
  double radius;
  double volume; // stores volume here
  double surfaceArea; // stores surface area here
  public:
    void set_radius(double);
    double find_volume() {return 4*M_PI*pow(radius, 3.0) / 3;}
    double find_surface_area() {return 4*M_PI*pow(radius, 2.0);}
};

void Sphere::set_radius(double rad) {
  radius = rad; // sets radius value
}


int main() {
  // create an array of Sphere objects as test cases
  Sphere spheres [5]; // initializes an array of Sphere objects
  spheres[0].set_radius(4); // arbitrary values
  spheres[1].set_radius(5.5);
  spheres[2].set_radius(1);
  spheres[3].set_radius(0);
  spheres[4].set_radius(15.625);

  int length = sizeof(spheres)/sizeof(*spheres); // store length of spheres

  // output results for each sphere
  for (int k = 0; k < length; k++) {
    std::cout << "Sphere " << k+1 << std::endl;
    std::cout << "volume: " << spheres[k].find_volume() << std::endl;
    std::cout << "surface area: " << spheres[k].find_surface_area() << std::endl;
    std::cout << "" << std::endl; // blank line
  }
return 0;
}
