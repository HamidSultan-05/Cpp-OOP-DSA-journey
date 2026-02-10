#include<iostream>                           //Library file containing declaration of various builtin functions
using namespace std;                         //Family of identifiers usually used of stream puroposes

int main()
{
	/*In this program we will assign some addition, subtraction, multiplication, division,Modulus operations by
	assigning auto type to variables	some values and check the result*/
	auto a = 5 + 3;                        //Performing addition operation
	auto b = 7 + 4.5;                      //Performing addition operation
	auto c = 45 - 30;                      //Performing subtraction operation
	auto d = 16 * 5;                       //Performing multiplication operation
	auto e = 25 / 5;                       //Performing division operation
	auto f = 19 % 3;                       //Performing modulus operation

	cout << "The Result of (a) variable is=" << a << endl;            //Output result of addition
	cout << "--------------------------------------------------" << endl;
	cout << "The result of (b) variable is=" << b << endl;            //Output result of addition
	cout << "--------------------------------------------------" << endl;
	cout << "The result of (c) variable is=" << c << endl;            //Output result of subtraction
	cout << "--------------------------------------------------" << endl;
	cout << "The result of (d) variable is=" << d << endl;            //Output result of multiplication
	cout << "--------------------------------------------------" << endl;
	cout << "The result of (e) variable is=" << e << endl;            //Output result of division
	cout << "--------------------------------------------------" << endl;
	cout << "The result of (f) variable is=" << f << endl;            //Output result of modulus
	cout << "--------------------------------------------------" << endl;

	return 0;

}