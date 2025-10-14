// Demonstration of Copy Constructor

#include<iostream>
using namespace std;
class Student 
{	int id;
	public:	Student(int i)
		{	id = i;
     			cout << "Constructor called\n";
    		}
		Student(Student &s) 	// Copy constructor
		{	id = s.id;
			cout << "Copy constructor called\n";
    		}
		void display() 
		{	cout << "ID: " << id << endl;
    		}
};
int main() {
    Student s1(500);       // Constructor called here
    Student s2 = s1;       // Copy constructor called here
    s1.display();
    s2.display();
    return 0;
}
