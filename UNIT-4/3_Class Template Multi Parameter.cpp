// Lab Expt 3: Class Template with multiple parameters.
#include <iostream>
using namespace std;
// Class template with two parameters
template <class T1, class T2>
class MyClass {
    T1 value1;
    T2 value2;
public:
    MyClass(T1 v1, T2 v2)     // Constructor
{	        value1 = v1;	value2 = v2;	  		 }
void display() 		   // Function to display values
{	      cout << "Value 1: " << value1 << ", Value 2: " << value2 << endl;
  	  }	};
int main() {
    MyClass<int, float> obj1(10, 20.5);	    // Integer and float
    obj1.display();
    MyClass<string, char> obj2("Hello", 'A');	    // String and char
    obj2.display();
    MyClass<double, int> obj3(99.99, 100);	    // Double and int
    obj3.display();
    return 0;	}
