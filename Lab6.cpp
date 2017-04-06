//*******************************************
// FILE: LAB 6. 
// DESCRIPTION: ASU Diving Competition
// AUTHORS: Chenlu Liang	
// SESSION INFORMATION: Friday
// CREATED: 14 Nov 2013
// LAST MODIFIED: 14 Nov 2013
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

//--------------------------------------------------------------------------------------------------
// FUNCTION: DiveNumber()
//
// DESCRIPTION:
// Displays a prompt string requesting the user to enter a number. Returns the number (as a double)
// that was entered on the keyboard.
//--------------------------------------------------------------------------------------------------
double DiveNumber(string prompt)
{
    double n;
    cout << prompt;
    cin >> n;
    return n;
}

void displayMeun()
{
	cout << endl;
	cout << setw(18) << "meun" << endl;
	cout << setw(5) << "ASU Diving Competition << endl;
	cout << setw(5) << "-----------------" << endl;
	cout <<setw(10) << "Dive"<< "/t" << "Difficulty" << endl;

void numDiveScores( double diveScores[ ], int num )
{
	int index;

	cout << "How many scores will be entered? (3-6) : " << endl;
	cin >> num;

	if (num<3, num>6) 
	{
		cout << "**Error - number of scores must be 3 to 6*" << endl;
	}
	else 
	{
		cout << "How many scores will be entered? (3-6) : " << endl;
		cin >> num;
	}

	for (index=0; index<num; index++ )
	{
		index = index+1;
	    cout << "Enter score " << (index+1) << " : " << endl;
		cin >> diveScores[index];
	}
}

double getTotal( double diveScores[10] )
{
	int index;
	double total = 0;

	for (index = 0; index<10; index++)
	{
		total += diveScores[index];
	}
	return total;
}

int main()
{
	
	do 
	{
		name = getName();
		cout << "Enter the Diver's name : " << endl;
		dives = getDives();
		cout << "How many dives will be judged for this diver (1-5)? : " << endl;
	}
	while();

	return 0;
}



