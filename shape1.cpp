/*
* @author Matthew Clayton
* @date 24 October 2016
* @assign.ment H5 Class Practice: Classes and Functions
* @descrip.tion
* This file contains the second class of the H5 assignment for EECE1080C.
* This file contains a solution to finding the volume and surface area of a
* torus.
*
* Note: I tried to do this fairly quickly, I did not account for memory
* management or efficiency. Additionally, I did not account for radii that do
* not make sense (i.e. negative radii).
*/

#define _USE_MATH_DEFINES
#include <math.h> // to get value of pi; use pow
#include <iostream>
using namespace std;

class Shape1 {
  // declare radius variables, variables to hold volume and surface area
  double innerRadius;
  double tubeRadius;
  double volume;
  double surfaceArea;
  public:
    void set_radii(double, double);
    double find_volume() {return 2*pow(M_PI, 2)*innerRadius*pow(tubeRadius, 2);}
    double find_surface_area() {return 4*pow(M_PI, 2)*innerRadius*tubeRadius;}
};

void Shape1::set_radii(double inner, double tube) {
  // set radii values
  innerRadius = inner; // inner radius
  tubeRadius = tube; // radius of tube
}

int main() {
  // create an array of Shape1 objects as test cases
  Shape1 tori [5]; // initializes an array of Shape1 objects
  tori[0].set_radii(7, 3);
  tori[1].set_radii(0, 5);
  tori[2].set_radii(4, 5);
  tori[3].set_radii(6, 2);
  tori[4].set_radii(12.25, 7.5);

    int length = sizeof(tori)/sizeof(*tori); // store length of tori

    // output results for each torus
    for (int k = 0; k < length; k++) {
      std::cout << "Torus " << k+1 << std::endl;
      std::cout << "volume: " << tori[k].find_volume() << std::endl;
      std::cout << "surface area: " << tori[k].find_surface_area() << std::endl;
      std::cout << "" << std::endl; // blank line
    }
  return 0;
}
