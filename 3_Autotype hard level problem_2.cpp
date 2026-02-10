#include<iostream>                   //Library file containing the declaration of various uitlity builtin function 
using namespace std;                 //File containing idendifiers usually used for stream purposes

int main()
{
	/*In this program we use two variable (a,b). We will initialize these variable (a) with a value and second 
	variable (b) will hold (a+2.4) and we will check what will be the answer and why*/

	auto a{ 10 };                   //First auto type variable (a)
	auto b{ a + 2.3 };              //Second auto type variable (b)

	cout << "The Result stored in variable (b) is=" << b << endl;
	return 0;
	/*The result of this program shows that variable (b) will store the double value because it does not matter to
	auto data type that wether the value holded by a variable is of which type it guesses the data type after perfrom
	the operation input in it*/
}