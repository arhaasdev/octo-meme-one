//============================================================================
// Name        : console-io.cpp
// Author      : Adam Robert Haas
// Version     : 0.0.1
// Copyright   : Marmot willpower is considerable.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int numberOfLanguages;

	cout << "Hello reader.\n"
		 << "Welcome to C++.\n";

	cout << "How many languages have you used? ";

	cin >> numberOfLanguages;

	if (numberOfLanguages < 1)
		cout << "Read the preface. you may prefer\n"
			 << "a more elementary book by the same author.";
	else
		cout << "Enjoy the book.\n";

	return 0;
}
