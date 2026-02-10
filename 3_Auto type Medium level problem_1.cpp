#include<iostream>                      //Library file containing the declaration of builtin utility functions
using namespace std;                    //File containing identifiers usually for stream purposes

int main()
{
	/*In this program we will initialize an auto type simple variable (a) then we will use reference variable to
	for (a) then we will assign this reference variable to another declared auto variable (b) to check wether value
	of (a) is given to (b) or not*/
	 
	auto a = 15;                       //Initializing an (a) variable
	auto& ref = a;                     //Assigning a reference variable to it
	auto b = ref;                     //Assigning a reference variable to another declared variable (b)

	cout << "The value of (b) variable is=" << b<<endl;
	cout << "-----------------------------------------------------------" << endl;
	return 0;
}