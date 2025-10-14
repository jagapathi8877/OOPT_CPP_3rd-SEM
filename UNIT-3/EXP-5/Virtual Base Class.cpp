// Demonstrtion of Virtual Base Class
#include <iostream>
using namespace std;

class Person 
{	public:
    void show() 
	{ cout << "I am a Person" << endl; }
};

class Student : virtual public Person 
{	public:
    void studentInfo() { cout << "I am a Student" << endl; }
};

class Teacher : virtual public Person 
{	public:
    void teacherInfo() { cout << "I am a Teacher" << endl; }
};

class TA : public Student, public Teacher 
{	public:
    void display() 
	{	
    show(); // Only one copy of Person is inherited
  }
};

int main() {
    TA obj;
    obj.display();
    obj.studentInfo();
    obj.teacherInfo();
    return 0;
}
