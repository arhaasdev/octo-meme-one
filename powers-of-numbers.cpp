//============================================================================
// Name        : powers-of-numbers.cpp
// Author      : arhaasdev (Adam Robert Haas)
// Version     : 0.0.1
// Copyright   : Copyright marmots 2014, all rights reserved
// Description : Uses function overloading and default parameters
//============================================================================

#include <iostream>
using namespace std;

int power(int, int = 2);
long power(long, int = 2);
float power(float, int = 2);
double power(double, int = 2);

int main() {
	enum type {
		type_int, type_long, type_float, type_double
	};

	cout << "This utility calculates the result of raising a number of" << endl
			<< "a chosen data type, n, to an integral power, p. Please" << endl
			<< "select a data type for n as follows:" << endl;
	cout << "    int = \'i\'" << endl << "    long = \'l\'" << endl
			<< "    float = \'f\'" << endl << "    double = \'d\'" << endl
			<< endl << ">>> ";
	type dataType;
	char inChar;
	cin >> inChar;
	cout << endl;

	switch (inChar) {
	case 'i':
		dataType = type_int;
		break;
	case 'l':
		dataType = type_long;
		break;
	case 'f':
		dataType = type_float;
		break;
	case 'd':
		dataType = type_double;
	}

	bool useDefault;
	char ch;
	cout << "Enter \'y\' if you would like to chose a value for p," << endl
		<< "otherwise, enter \'n\'." << endl << endl << ">>> ";
	cin >> ch;
	cout << endl << endl;
	int p;
	if (ch == 'y') {
		useDefault = false;
		cout << "Enter a value for p:" << endl << endl << ">>> ";
		cin >> p;
		cout << endl << endl;
	} else {
		useDefault = true;
	}

	cout << "Enter a value for n:" << endl << endl << ">>> ";
	switch (dataType) {
	case type_int:
		int intN;
		cin >> intN;
		cout << endl;
		int intResult;
		if (!useDefault) {
			intResult = power(intN, p);
		} else {
			intResult = power(intN);
		}
		cout << "The result is " << intResult << ".";
		break;
	case type_long:
		long longN;
		cin >> longN;
		cout << endl;
		long longResult;
		if (!useDefault) {
			longResult = power(longN, p);
		} else {
			longResult = power(longN);
		}
		cout << "The result is " << longResult << ".";
		break;
	case type_float:
		float floatN;
		cin >> floatN;
		cout << endl;
		float floatResult;
		if (!useDefault) {
			floatResult = power(floatN, p);
		} else {
			floatResult = power(floatN);
		}
		cout << "The result is " << floatResult << ".";
		break;
	case type_double:
		double doubleN;
		cin >> doubleN;
		cout << endl;
		double doubleResult;
		if (!useDefault) {
			doubleResult = power(doubleN, p);
		} else {
			doubleResult = power(doubleN);
		}
		cout << "The result is " << doubleResult << ".";
	}

	cout << endl << endl;

	return 0;
}


int power(int n, int p) {
	int result = n;
	int count = p;
	while (count >= 2) {
		result *= n;
		count--;
	}

	return result;
}


long power(long n, int p) {
	long result = n;
	int count = p;
	while (count >= 2) {
		result *= n;
		count--;
	}

	return result;
}


float power(float n, int p) {
	float result = n;
	int count = p;
	while (count >= 2) {
		result *= n;
		count--;
	}

	return result;
}


double power(double n, int p) {
	double result = n;
	int count = p;
	while (count >= 2) {
		result *= n;
		count--;
	}

	return result;
}
