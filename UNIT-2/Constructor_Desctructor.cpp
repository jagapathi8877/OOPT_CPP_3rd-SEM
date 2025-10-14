// demo constructor and destructor
#include <iostream>
using namespace std;

class Demo
{
public:
    Demo() {
        cout << "Constructor called: Object is created." << endl;
    }
    // Destructor
    ~Demo() {
        cout << "Destructor called: Object is destroyed." << endl;
    }
    // Member function
    void display() {
        cout << "Inside display function." << endl;
    }
};

int main() {
    {
        Demo obj; // Constructor will be called
        obj.display();
    } // Destructor will be called automatically when obj goes out of scope
    cout << "Back in main function." << endl;
    return 0;
}
