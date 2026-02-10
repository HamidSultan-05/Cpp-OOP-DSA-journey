#include<iostream>                          //Library File containing the declaration of various utility function
using namespace std;                        //File containing identifiers commonly used for stream operations

int main()
{
/*In this program we will initialize a simple const int type variable (a) and then we will initilize another auto 
type variable (b) with (a) but will use reference operator with second initialization and will check the using the
reference operator does the second variable adopts the const nature from first variable (a)*/

	const int a = 12;
	auto& b = a;

	cout << "The value of b is=" << b << endl;
	/*cout << "Assigning another value to b=";
	cin >> b; 
	By doing this program gives an erro which means that it also become the const varible when reference operator 
	is used because (b) is referencing to (a) not copying its value*/
	return 0;
}