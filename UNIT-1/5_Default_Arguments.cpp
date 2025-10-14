#include <iostream>
using namespace std;

void greet(string name = "Guest", int times = 1) // Function with default arguments
{
    for (int i = 0; i < times; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}
int main() 
{
    greet();                    	// Uses both default arguments
    greet("Anil");           		  // Uses default for 'times'
    greet("Ravi", 3);         	  // No default used, both values given
    return 0;
}
