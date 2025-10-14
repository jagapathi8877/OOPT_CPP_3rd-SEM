// Unary & Binary Operator Overloading - Member Function
#include <iostream>
using namespace std;
class Number 
{	public: int value;
    Number(int v = 0) 	    // Constructor
	{
        value = v;
    }

    void operator++() 		    // Unary operator overloading (increment)
	{
        ++value;
    }
    Number operator+(Number obj)     // Binary operator overloading (addition)
	{	Number temp;
        temp.value = value + obj.value;
        return temp;
    }
    void display()
	{
        cout << "Value: " << value << endl;
    }
};
int main() 
{	Number n1(5), n2(10), n3;
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
