#include <iostream>
 
using namespace std;
 
// Base class
class Shape  {

public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
	
   void setWidth(int w) {
      width = w;
   }
	
   void setHeight(int h) {
      height = h;
   }
	
protected:
   int width;
   int height;
};
 
// Derived classes
class Rectangle: public Shape {

public:
   virtual int getArea() { 
      return (width * height); 
   }
};

class Kotak: public Rectangle {
public:
   int getArea() {
      return (width*width);
   }
};

class Triangle: public Shape {

public:
   int getArea() { 
      return (width * height)/2; 
   }
};
 
int main(void) {
   Rectangle Rect;
   Triangle  Tri;
   Kotak kot;
   Rect.setWidth(5);
   Rect.setHeight(7);
   kot.setWidth(10);
   kot.setHeight(10);
   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
   cout << "Total Kotak area: " << kot.getArea() << endl;

   Tri.setWidth(5);
   Tri.setHeight(7);
	
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl; 

   return 0;
}