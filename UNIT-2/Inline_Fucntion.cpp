// demonstration  INLINE FUNCTIONS
#include<iostream>
using namespace std;
inline int square(int x) 
{
    return x * x;   
}
int main() {
    cout << "Square of 5 is: " << square(5) << endl;
     // here, instead of calling the square() function, 
		// the compiler replaces it with 5 * 5 at compile time.
    return 0;
}
