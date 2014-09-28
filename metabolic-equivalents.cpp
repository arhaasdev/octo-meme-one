//============================================================================
// Name        : metabolic-equivalents.cpp
// Author      : Adam Robert Haas
// Version     : 0.0.1
// Copyright   : Marmots
// Description : Program to estimate caloric expenditures
//============================================================================

#include <iostream>
using namespace std;

int getActivityCode();
char promptForActivity();
int getNumMets(int);
int getDuration();
int getWeight();
int calculateExpenditure(int, int, int);

int main()
{
	cout << "Welcome to the caloric expenditure calculator." << endl << endl;
	int numMets = getNumMets(getActivityCode());
	int duration = getDuration();
	int weight = getWeight();
	int expenditure = calculateExpenditure(numMets, duration, weight);
	cout << endl << "Your activity burned approximately " << expenditure
		<< " calories." << endl;
}

int getActivityCode()
{
	char inChar;
	inChar = promptForActivity();
	int activityCode;
	bool matchFound = false;
	while (!matchFound)
	{
		switch (inChar)
		{
			case 's':
				activityCode = 1;
				matchFound = true;
				break;
			case 'w':
				activityCode = 2;
				matchFound = true;
				break;
			case 'b':
				activityCode = 3;
				matchFound = true;
				break;
			default:
				cout << "Invalid input. Please try again." << endl << endl;
				inChar = promptForActivity();
				break;
		}
	}

	return activityCode;
}

char promptForActivity()
{
	cout << "Please select an activity:" << endl;
	cout << "    Enter \'s\' for sleeping" << endl;
	cout << "    Enter \'w\' for walking" << endl;
	cout << "    Enter \'b\' for basketball" << endl;

	char inChar;
	cin >> inChar;

	return inChar;
}

int getNumMets(int activityCode)
{
	int numMets;
	switch (activityCode)
	{
		case 1:
			numMets = 1;
			break;
		case 2:
			numMets = 2;
			break;
		case 3:
			numMets = 8;
	}

	return numMets;
}

int getDuration()
{
	cout << endl << "For how many minutes did you peform this activity? "
			<< endl;
	const int MAX_DURATION = 10000;
	int duration;
	cin >> duration;

	if ((duration >= 1) && (duration <= MAX_DURATION))
		return duration;
	else
	{
		bool validDuration = false;
		while (!validDuration)
		{
			cout << "Invalid input. Please try again." << endl << endl;
			cout << "For how many minutes did you peform this activity? "
				<< endl;
			cin >> duration;
			cout << duration;
			if ((duration >= 1) && (duration <= MAX_DURATION))
				validDuration = true;
		}
	}

	return duration;
}

int getWeight()
{
	cout << endl << "Please enter your weight in pounds: " << endl;
	int weight;
	cin >> weight;

	if ((weight > 0) && (weight < 2000))
		return weight;
	else
	{
		bool validWeight = false;
		while (!validWeight)
		{
			cout << endl << "Invalid input. Please try again." << endl;
			cout << endl << "Please enter your weight in pounds:" << endl;
			int weight;
			cin >> weight;
			if ((weight > 0) && (weight < 2000))
				validWeight = true;
		}
	}

	return weight;
}

int calculateExpenditure(int numMets, int duration, int weight)
{
	float massInKilos = weight / 2.2;
	int expenditure = 0.0175 * numMets * duration * massInKilos;

	return expenditure;
}
