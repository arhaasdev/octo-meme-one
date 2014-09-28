//============================================================================
// Name        : jackie-001.cpp
// Author      : Adam Robert Haas
// Version     :
// Copyright   : Marmot willpower is considerable.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	char pause1; // Used so that we can see the output

	cout << endl << "Welcome to C++" << endl;
	cout << "Please Enter Name " << endl;
	cin >> name;
	cout << "Name is : " << name << endl << endl;
	cin >> pause1;

	int first = 22, second = 51;
	float third = 2.2555345;
	cout << endl << "Unformatted output using integers and floats"
		 << endl;
	cout << first << second << third << endl;
	cout << "first " << first << endl;
	cout << "second " << second << endl;
	cout << "third " << third << endl << endl;
	cin >> pause1;

	cout << endl << "Formatted floating point numbers" << endl;
	cout.setf(ios::fixed); // No scientific notation or trailing 0s
	cout.setf(ios::showpoint); // Always list the decimal point
	cout.precision(2); // Two decimal points to the right
	float fourth = 9999.59999;
	cout << third << endl;
	cout << fourth << endl;
	cin >> pause1;

	return 0;
}
