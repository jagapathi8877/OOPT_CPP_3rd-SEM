// Class Template : Addition of two numbers 
#include <iostream>
using namespace std;

template <typename T1, typename T2>  // Class Template for Addition
class Adder 
{	private:	    T1 a;
    				T2 b;
	public:
				    Adder(T1 x, T2 y)
					{
						a = x;
						b = y;
				    } 
				    auto add() 
					{	return a + b;
    				}
};
int main() 
{	// int + int
    Adder<int, int> obj1(10, 20);
    cout << "Addition of int + int = " << obj1.add() << endl;

    // int + float
    Adder<int, float> obj2(5, 2.5f);
    cout << "Addition of int + float = " << obj2.add() << endl;

    // double + int
    Adder<double, int> obj3(3.5, 4);
    cout << "Addition of double + int = " << obj3.add() << endl;

    return 0;
}
