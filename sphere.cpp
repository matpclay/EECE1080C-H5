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
  // create a Sphere object as a test case
  Sphere sphere1; // declares an object sphere1 of type Sphere
  sphere1.set_radius(4); // arbitrary value
  // output results
  cout << "volume: " << sphere1.find_volume() << endl;
  cout << "surface area: " << sphere1.find_surface_area() << endl;
return 0;
}
