#include <iostream>
using namespace std;
// Recursive function to calculate factorial
long factorial(int n) 
{
    if (n == 0 || n==1) return 1
    else return n * factorial(n - 1);
}
int main() 
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0)  cout << "Factorial is not defined for negative numbers." << endl;
  	else 
	  {
        long result = factorial(number);
        cout << "Factorial of " << number << " = " << result << endl;
    }
    return 0;
}
