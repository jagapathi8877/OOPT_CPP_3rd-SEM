#include <iostream>
using namespace std; 	// using standard namespace
int x = 100; 			// Global variable
namespace MyNamespace 
{
    int value = 50;
    void show() 
	{        
    cout << "Inside MyNamespace, value = " << value << endl;
  }
}
int main() 
{    int x = 10; // Local variable
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl; // Using scope resolution to access global x
    // Accessing namespace variable and function
    cout << "Namespace value = " << MyNamespace::value << endl;
    MyNamespace::show();
    return 0;
}
