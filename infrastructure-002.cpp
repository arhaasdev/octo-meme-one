//============================================================================
// Name        : infrastructure-003.cpp
// Author      : arhaasdev (Adam Robert Haas)
// Version     : 0.0.1
// Copyright   : Marmots
// Description : Random numbers
//============================================================================

#include <iostream>
#include <cstdlib>


int playDice();




using namespace std;

int playDice();

int main()
{
	int count = 0;

	do {
		cout << playDice() << endl;
		count++;
	} while (count < 100);

	return 0;
}

int playDice()
{
	return rand() % 12 + 1;
}
