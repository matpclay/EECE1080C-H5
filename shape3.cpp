/*
* @author Matthew Clayton
* @date 24 October 2016
* @assign.ment H5 Class Practice: Classes and Functions
* @descrip.tion
* This file contains the fourth class of the H5 assignment for EECE1080C.
* This file contains a solution to finding the volume and surface area of a
* triangular prism.
*
* Note: I tried to do this fairly quickly, I did not account for memory
* management or efficiency. Additionally, I did not account for lengths that do
* not make sense (i.e. negative lengths, areas, perimeters).
*
*/

#define _USE_MATH_DEFINES
#include <math.h> // to get value of pi; use pow
#include <iostream>
using namespace std;

class Shape3 {
  // these are assumed to make sense
  // the program does not check to see if these make sense
  double length;
  double base_perimeter;
  double base_area;
  double volume;
  double surfaceArea;
  public:
    void set_variables(double, double, double);
    double find_volume() {return base_area*length;}
    double find_surface_area() {return 2*base_area + base_perimeter*length;}
  };

  void Shape3::set_variables(double wide, double perimeter, double area) {
    // set dimensions
    length = wide;
    base_perimeter = perimeter;
    base_area = area;
  }

  int main() {
    // create an array of Shape3 objects as test cases
    Shape3 prisms [5]; // initializes an array of Shape3 objects
    prisms[0].set_variables(12, 24, 25);
    prisms[1].set_variables(0, 8, 12);
    prisms[2].set_variables(2, 7, 11);
    prisms[3].set_variables(3.8, 6.2, 1);
    prisms[4].set_variables(5, 9, 4.5);


    int arraySize = sizeof(prisms)/sizeof(*prisms); // store length of prisms

    // output results for each prism
    for (int k = 0; k < arraySize; k++) {
      std::cout << "Prism " << k+1 << std::endl;
      std::cout << "volume: " << prisms[k].find_volume() << std::endl;
      std::cout << "surface area: " << prisms[k].find_surface_area() << std::endl;
      std::cout << "" << std::endl; // blank line
    }
    return 0;
  }
