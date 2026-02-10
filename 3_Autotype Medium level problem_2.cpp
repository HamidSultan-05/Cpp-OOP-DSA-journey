#include<iostream>                        //Library file containing declaration of builtin utility functions
using namespace std;                      //File containing identifiers usually containing stream functions

int main()
{
/*In this program we will assign the constant int type value to variable (a) and then initialize another variable
(b) of auto type with this int constant variable (a) to check that variable (b) will behave like constant or not*/

	const int a = 10;                  //Initialize int type constant variable
	auto b= a;                        //assigning a to b

	cout << "The value of variable (b) is=" << b << endl;
	return 0;
/*Variable (b) is not constant because auto type removes the const nature of variable secondly (b) is making an 
indepedent copy of (a)  so it is not totally considered as (a) You can check it by input the different value of 
(a) and (b) simultaneously*/
}