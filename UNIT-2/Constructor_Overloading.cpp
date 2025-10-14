// Constructor overloading
#include<iostream>
using namespace std;
class Demo
{
	public:
			Demo()
			{
				cout<<"I am in Default Constructor";
			}
			Demo(int x)
			{
				cout<<"\nI am in One arg constructor"<<x;
			}
			Demo(char str[12])
			{
				cout<<"\nI am in one arg string constructor"<<str;
			}
			~Demo()
			{
				cout<<"\nI am in DESTRUCTOR";
			}
};
int main()
{
	Demo ob;
	Demo ob1(10);
	Demo ob2("CPP Demo Code");
}
