#include<iostream>                         //Library file which include declaration of utility builtin functions
using namespace std;                       //File containing set of identifier usually for stream purposes

int main()
{
	/*In this program we will initialize an auto type variable and then assign that variable to another auto type
	variable to check that what type of value auto type fetches form assigned value*/
    
	auto a = 23;                          //Initializing an auto variable
	auto b = a;                           //Initializing b with a (Both auto type)
   //-------------------------------------------------------------------------------//
	cout << "The value assign to b variable is=" << b << "  same the value assigned to a" << endl;
	cout << "--------------------------------------------------" << endl;
	return 0;
}