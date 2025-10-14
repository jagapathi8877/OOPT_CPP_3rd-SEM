// Function Templates
#include<iostream>
using namespace std;
template <typename T>
T add(T a, T b) 
{	
		return a + b;
}
int main() 
{		cout << "integers sum= "<< add<int>(5, 3) << "\n";
  		cout << "double sum= "<< add<double>(2.5, 1.5) << "\n";
  		cout << "float sum= "<<add<float>(1.44f,1.55f)<<"\n";
  		return 0;
}
