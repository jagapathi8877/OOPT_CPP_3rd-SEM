//  Pure Virtual Function
#include <iostream>
#include <cmath>
using namespace std;
// Abstract Base Class
class Shape {
public:    // Pure virtual function
    virtual void area() = 0;	};
// Derived Class: Circle
class Circle : public Shape {
    float radius;
public:    Circle(float r) : radius(r) {}
    		void area() {
        		cout << "Area of Circle = " << 3.14159 * radius * radius << endl;
   	 }	};
// Derived Class: Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:	    Rectangle(float l, float b) : length(l), breadth(b) {}
    		void area() {
      		  cout << "Area of Rectangle = " << length * breadth << endl;
    }	};
// Derived Class: Triangle
class Triangle : public Shape {
    float base, height;
public:	Triangle(float b, float h) : base(b), height(h) {}
    	void area() {
        	cout << "Area of Triangle = " << 0.5 * base * height << endl;
   	 }	};
int main() {
    Shape *s; // Base class pointer
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(3, 7);
    s = &c;
    s->area();
    s = &r;
    s->area();
    s = &t;
    s->area();
    return 0;
}
