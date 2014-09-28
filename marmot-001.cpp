//============================================================================
// Name        : marmot-001.cpp
// Author      : Adam Robert Haas
// Version     :
// Copyright   : Marmot willpower is considerable.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	int d = 3;

	cout << n / static_cast<double>(d) << "\n";

	cout << static_cast<int>(n / d) << "\n";

	cout << static_cast<int>(n / 5.0) << "\n";
	cout << static_cast<int>(n / 5.9) << "\n";

	return 0;
}
