//============================================================================
// Name        : ice-cream.cpp
// Author      : Adam Robert Haas
// Version     : 0.0.1
// Copyright   : Copyright marmots, 2014, all rights reserved
// Description : This program simulates an ice cream cone vendor
//============================================================================

#include <iostream>
using namespace std;


//----Start Global Enum Definitions-------------------------------------------
enum Flavor
{
	code_vanilla = 'v',
	code_chocolate = 'c',
	code_strawberry = 's',
	code_blueberry = 'b',
	code_mint = 'm',
	code_pineapple = 'p',
	code_raspberry = 'r'
};


enum PricePerScoop
{
	price_vanilla = 100,
	price_chocolate = 100,
	price_strawberry = 100,
	price_blueberry = 125,
	price_mint = 125,
	price_pineapple = 125,
	price_raspberry = 125
};
//----End Global Enum Definitions---------------------------------------------


//----Start Function Prototypes-----------------------------------------------
void displayPriceList();
short getNumCones();
short promptForNumCones();
short getNumScoops(short);
short promptForNumScoops(short);
Flavor getFlavor();
char promptForFlavor();
short getPricePerScoop(Flavor);
void printFinalBill(short);
//----End Function Prototypes-------------------------------------------------


int main()
{
	cout << "Hackers, welcome to arhaasdev's console ice cream shop!"
		 << endl << endl;
	displayPriceList();

	short totalInCents = 0;
	short numCones = getNumCones();
	for (short i = 0; i < numCones; i++)
	{
		short numScoops = getNumScoops(i + 1);
		short pricePerScoop = getPricePerScoop(getFlavor());
		totalInCents += 80 + numScoops * pricePerScoop;
	}

	printFinalBill(totalInCents);

	return 0;
}


void displayPriceList()
{
	cout << "Each Cone Costs $0.80." << endl << endl;
	cout << "Price Per Scoop . . ." << endl << endl;

	cout << "FLAVOR      PRICE" << endl;
	cout << "----------  -----" << endl;

	cout << "Vanilla     $1.00" << endl;
	cout << "Chocolate   $1.00" << endl;
	cout << "Strawberry  $1.00" << endl;
	cout << "Blueberry   $1.25" << endl;
	cout << "Mint        $1.25" << endl;
	cout << "Pineapple   $1.25" << endl;
	cout << "Raspberry   $1.25"  << endl << endl << endl;
}


short getNumCones()
{
	const short MIN_CONES = 1;
	const short MAX_CONES = 10;
	short numCones = promptForNumCones();

	while (!(numCones >= MIN_CONES && numCones <= MAX_CONES))
	{
		cout << "Please enter a quantity of at least 1 but not more than 10."
			<< endl << endl;
		numCones = promptForNumCones();
	}

	return numCones;
}


short promptForNumCones()
{
	cout << "How many ice cream cones would you like?" << endl << ">>> "
		<< endl;

	short numCones;
	cin >> numCones;
	cout << endl;

	return numCones;
}


short getNumScoops(short coneNdx)
{
	const short MIN_SCOOPS = 1;
	const short MAX_SCOOPS = 5;

	short numScoops = promptForNumScoops(coneNdx);

	while (!(numScoops >= MIN_SCOOPS && numScoops <= MAX_SCOOPS))
	{
		cout << "Please enter a quantity of at least 1 but not more than 5."
			<< endl << endl;
		numScoops = promptForNumScoops(coneNdx);
	}

	return numScoops;

}


short promptForNumScoops(short coneNdx)
{
	cout << "How many scoops of ice cream would you like on cone #" << coneNdx
		<< "?" << endl
		<< ">>> ";

	short numScoops;
	cin >> numScoops;
	cout << endl;

	return numScoops;
}


Flavor getFlavor()
{
	char rawChosenFlavor;
	Flavor flavor;
	bool done = true;

	do
	{
		rawChosenFlavor = promptForFlavor();
		flavor = static_cast<Flavor>(rawChosenFlavor);
		switch (flavor)
		{
		case code_vanilla:
			break;
		case code_chocolate:
			break;
		case code_strawberry:
			break;
		case code_blueberry:
			break;
		case code_mint:
			break;
		case code_pineapple:
			break;
		case code_raspberry:
			break;
		default:
			done = false;
			cout << "Sorry, that isn't one of the choices. Please try again."
			<< endl << endl;
		}
	}
	while (!done);

	return flavor;
}


char promptForFlavor()
{
	cout << "Choose a flavor." << endl << endl;
	cout << "Vanilla    -> \'v\'" << endl
		<< "Chocolate  -> \'c\'" << endl
		<< "Strawberry -> \'s\'" << endl
		<< "Blueberry  -> \'b\'" << endl
		<< "Mint       -> \'m\'" << endl
		<< "Pineapple  -> \'p\'" << endl
		<< "Raspberry  -> \'r\'" << endl << endl;
	cout << ">>> ";

	char rawChosenFlavor;
	cin >> rawChosenFlavor;
	cout << endl;

	return rawChosenFlavor;
}


short getPricePerScoop(Flavor flavor)
{
	short price;
	switch (flavor)
	{
	case code_vanilla:
		price = price_vanilla;
		break;
	case code_chocolate:
		price = price_chocolate;
		break;
	case code_strawberry:
		price = price_strawberry;
		break;
	case code_blueberry:
		price = price_blueberry;
		break;
	case code_mint:
		price = price_mint;
		break;
	case code_pineapple:
		price = price_pineapple;
		break;
	case code_raspberry:
		price = price_raspberry;
		break;
	default:
		break;
	}

	return price;
}


void printFinalBill(short totalInCents)
{
	float totalAmountDue = static_cast<float>(totalInCents / 100.0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Your order total is $" << totalAmountDue << "." << endl << endl;
}
