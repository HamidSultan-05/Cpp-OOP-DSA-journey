#include<iostream>                   //Library file containing declaration of various functions
using namespace std;                 //Collection of identifiers usually for stream purposes

int main()
{
	//In this program we will assign random values to auto type variables and check that what type of value that fetch from initialized one
	auto a{ 12 };                   //Initializing auto type variables
	auto b{ 3.5 };
	auto c{ 'a' };

	cout << "Value assigned to a is=" << a << endl;                //Creating output using cout keyword
	cout << "Value assigned to b is=" << b << endl;
	cout << "Value assigned to c is=" << c << endl;

	return 0;
}