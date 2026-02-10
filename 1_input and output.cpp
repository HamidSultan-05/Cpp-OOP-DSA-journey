#include<iostream>                         //Headerfile containing declarations of input and output function
using namespace std;                       //Identifier collection written at start of program for easy input output operations

int main()
{
    int a, b;
    cin >> a >> b;                        //cin takes input using insertion operator (>>)
    int c{ a + b };
    cout << "The sum of entered number is=";        //cout prints the statement on screen
    cout << c;                                      //cout give output using extraction operator
    return 0;                                       //It means this program returns nothing 
}