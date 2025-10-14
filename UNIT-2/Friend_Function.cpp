// Adding Two Classes using FRIEND FUNCTIONS
#include<iostream>
using namespace std;
class Demo 
{	private:
     int x, y;

     void fun1() 
	 {
        x = 10;
        y = 20;
        cout << "I am inside member function (fun1()) in the class" << endl;
     }
     friend void add(Demo d);  // Declare friend function with parameter
};

void add(Demo d) {  // Friend function
    // Cannot call d.fun1() because it is private
    // So we need to set values directly if possible, or use constructor
    d.x = 10;  // Accessing private data
    d.y = 20;
    cout << "Sum = " << d.x + d.y << endl;
}

int main() {
    Demo ob;
    add(ob);  // Pass object to friend function
    return 0;
}
