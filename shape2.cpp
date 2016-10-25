/*
* @author Matthew Clayton
* @date 24 October 2016
* @assign.ment H5 Class Practice: Classes and Functions
* @descrip.tion
* This file contains the third class of the H5 assignment for EECE1080C.
* This file contains a solution to finding the volume and surface area of a
* cone.
*
* Note: I tried to do this fairly quickly, I did not account for memory
* management or efficiency. Additionally, I did not account for lengths that do
* not make sense (i.e. negative lengths, zero height).
*
*/

#define _USE_MATH_DEFINES
#include <math.h> // to get value of pi; use pow
#include <iostream>
using namespace std;

class Shape2 {
  double radius;
  double height;
  double volume; // stores volume here
  double surfaceArea; // stores surface area here
  public:
    void set_variables(double, double);
    double find_volume() {return M_PI*pow(radius, 2)*height/3;}
    double find_surface_area() {return (M_PI*pow(radius, 2)) + (sqrt(pow(radius, 2) + pow(height, 2))*M_PI*radius);}
};

void Shape2::set_variables(double rad, double tall) {
  // set dimensions
  radius = rad;
  height = tall;
}

int main() {
  // create an array of Shape2 objects as test cases
  Shape2 cones [5]; // initializes an array of Shape2 objects
  cones[0].set_variables(2, 7);
  cones[1].set_variables(0, 5);
  cones[2].set_variables(3, 5.5);
  cones[3].set_variables(2.5, 1);
  cones[4].set_variables(12.5, 3);


  int length = sizeof(cones)/sizeof(*cones); // store length of cones

  // output results for each cone
  for (int k = 0; k < length; k++) {
    std::cout << "Cone " << k+1 << std::endl;
    std::cout << "volume: " << cones[k].find_volume() << std::endl;
    std::cout << "surface area: " << cones[k].find_surface_area() << std::endl;
    std::cout << "" << std::endl; // blank line
  }
  return 0;
}
