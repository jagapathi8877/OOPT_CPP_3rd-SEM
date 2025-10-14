// Demonstration of "this" Pointer
#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int x) //  local varible is X , argument also X so, this pointer will be used
	{
        this->x = x; // Resolving ambiguity
    }
    void show() { cout << "Value of x: " << this->x << endl; }
};

int main() {
    Test t(50);
    t.show();
    return 0;
}
