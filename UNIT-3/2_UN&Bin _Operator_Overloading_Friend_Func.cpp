// Unary and Binary Operator Overloading - Friend Function
#include <iostream>
using namespace std;

class Number 
{	public:	int value;
    Number(int v = 0)     // Constructor
	{
        value = v;
    }
    // Friend function declarations
    friend Number operator++(Number &n);      // Unary
    friend Number operator+(Number n1, Number n2);  // Binary
    void display() 
	{
        cout << "Value: " << value << endl;
    }
};
// Unary operator overloading (prefix ++)
Number operator++(Number &n) {
    n.value++;
    return n;
}
// Binary operator overloading (+)
Number operator+(Number n1, Number n2) {
    return Number(n1.value + n2.value);
}
int main() {
    Number n1(5), n2(10), n3;
    cout << "Before Unary Operation:" << endl;
    n1.display();
    // Unary operator overloading
    ++n1;
    cout << "After Unary Operation (++n1):" << endl;
    n1.display();
    // Binary operator overloading
    n3 = n1 + n2;
    cout << "After Binary Operation (n1 + n2):" << endl;
    n3.display();
    return 0;
}
