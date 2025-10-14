#include <iostream>
using namespace std;
class ClassA
{
	private:
				int sno;  // it is private, not accessible outside
	public:
				int pincode;   // avaiable anywhere
	protected:
				int mobno;  // available only in Child class...
	
};
class ClassB:public ClassA
{
	public:
	void disp()
	{
		cout<<"Pincode"<<pincode;
	}
};
int main()
{
	ClassA ob;
	// ob.sno=100;  ERROR WILL COME - bcoz it is private
	ob.pincode=123;
	cout<<ob.pincode;  // accessibel bcoz it is public
	ClassB obb;
	obb.disp();
	return 0;
}
