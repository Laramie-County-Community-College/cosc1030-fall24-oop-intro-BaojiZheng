/*
Given class Triangle (in files Triangle.h and Triangle.cpp), complete main() to read and set the base and height of triangle1 and of triangle2, determine which triangle's area is smaller, and output that triangle's info, making use of Triangle's relevant member functions.

Ex: If the input is:

3.0 4.0
4.0 5.0
where 3.0 is triangle1's base, 4.0 is triangle1's height, 4.0 is triangle2's base, and 5.0 is triangle2's height, the output is:

Triangle with smaller area:
Base: 3.00
Height: 4.00
Area: 6.00
*/

#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
   double base1;
   double height1;
   cin >> base1;
   cin >> height1;
   triangle1.SetBase(base1);
   triangle1.SetHeight(height1);
      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
   double base2;
   double height2;
   cin >> base2;
   cin >> height2;
   triangle2.SetBase(base2);
   triangle2.SetHeight(height2);



   cout << "Triangle with smaller area:" << endl;
   
   // TODO: Determine smaller triangle (use GetArea()) 
   // and output smaller triangle's info (use PrintInfo())
   double area1;
   double area2;
   area1 = triangle1.GetArea();
   area2 = triangle2.GetArea();
   
   if (area1 < area2) {
      cout << "triangle 1" << endl;
      cout << triangle1.PrintInfo() << endl;
   } 
   else if (area1 > area2)
   {
      cout << "triangle 2" << endl;
      cout << triangle2.PrintInfo() << endl;
   }
   
   
   
   return 0;
}