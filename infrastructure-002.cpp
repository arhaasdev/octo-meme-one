//============================================================================
// Name        : infrastructure-002.cpp
// Author      : arhaasdev (Adam Robert Haas)
// Version     : 0.0.1
// Copyright   : Marmots
// Description : Shows how to format floating point outputs
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	double amount;
	cout << "Enter an amount in dollars: $";
	cin >> amount;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "That\'s like $" << amount << "." << endl;

	return 0;
}
