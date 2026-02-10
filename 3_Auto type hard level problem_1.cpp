#include<iostream>                       //Library file having the declarations of various uitlity builtin function
using namespace std;                     //File containing identifier usually for stream purposes

int add(int a, int b)                  //Definition of auto add function
{
	return a + b;
}

int main()
{
/*In this program we will take two variables of auto type (a,b) and add them. Result of these two type will be 
stored in another auto variable (c) we will check that wether this auto variable (c) stores the same type of value
as of above two variable*/

	int a{ 1 }, b{ 4 };
	auto result = add(a, b);
	cout << "The result of above addition is=" << result;
	return 0;
/*The result shows that result variable stores same type of variable as it was in (a,b) input*/
}