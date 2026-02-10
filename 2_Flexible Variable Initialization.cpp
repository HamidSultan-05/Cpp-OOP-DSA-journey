#include<iostream>                        //Header file containing declarations of various functions
using namespace std;

int main()
{
//C++ provide the feature of flexible initalization which mean there are different ways to initialize a variable
	int age_1 = 32;                     //First way
	int age_2 (32);                     //Second way
	int age_3 {32};                     //Third way
	cout << "Result of first way=" << age_1 << endl;
	cout << "Result of second way=" << age_2<<endl;
	cout << "Result of third way=" << age_3<<endl;
//The preferred and latest way is the third way of initialization because it reduces the risk of loosing data
	return 0;
}