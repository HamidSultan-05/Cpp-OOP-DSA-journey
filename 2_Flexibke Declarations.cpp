#include"iostream";                          //Header file containing declarations of function 
using namespace std;                         

int main()
{
	//C++ provide a feature of flexible declaration in which variable can be declared at the place where it is used

	int a,b;                                              //Variable declared
	cout << "For multiplication Enter two numbers=";      //Statement written for user 
	cin >> a >>b;                                         //Taking the input of number
	int c;                                                //Variable declared flexibly for use
	c = a * b;                                            //Applying function
	cout << "The result after process is=" << c;
	return 0;
}