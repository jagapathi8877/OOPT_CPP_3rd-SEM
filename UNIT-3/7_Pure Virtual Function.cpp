// C++ program to demonstrate Abstract Classes
// and Pure Virtual Functions for calculating area

#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual void area() = 0;  
};

// Derived class for Rectangle
class Rectangle : public Shape {
    float length, breadth;
public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    void area() override {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }
    void area() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }
    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shapePtr; // Base class pointer

    Rectangle rect(5, 4);
    Circle cir(3);
    Triangle tri(6, 2);

    shapePtr = &rect;
    shapePtr->area();

    shapePtr = &cir;
    shapePtr->area();

    shapePtr = &tri;
    shapePtr->area();

    return 0;
}
