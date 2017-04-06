//*******************************************
// FILE: . 
// DESCRIPTION:  
// AUTHORS: 
// SESSION INFORMATION: 
// CREATED: 31 Oct 2013
// LAST MODIFIED: 31 Oct 2013
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function prototypes
void getChoice( char & );
double calcWeeklyPay ( int, double );
double calcWeeklyPay ( double );


int main () {
	
	char selection; // Menu selection
	int worked; // Hours worked
	double rate; // Hourly pay rate
	double yearly; // Yearly salary
	
	// Display the menu and get a selection
	cout << "Do you want to calculate the weekly pay of \n";
	cout << "(H) an hourly paid employee, or \n";
	cout << " (S) a salaried employee? \n";
	getChoice(selection);
	
	// Process the menu selection
	switch (selection) {
		// Hourly paid employee
		case 'H':										//
		case 'h':										//
			cout << "How many hours were worked ? ";
			cin >> worked;
			cout << "What is the hourly pay rate? ";
			cin >> rate;
			cout << "The gross weekly pay is $";
			cout << calcWeeklyPay(worked, rate) << endl; // which function is called?
			break;
		// salaried employee
		case 'S':										//
		case 's':										//
			cout << "What is the annual salary? ";
			cin >> yearly;
			cout << "The gross weekly pay is $";
			cout << calcWeeklyPay(yearly) << endl;		//
			break;
		default:
			break;
	}
	
	return 0;
}

void getChoice( char &letter)  // source that calls this function?
{
	cout << "Enter your choice ( H or S ): ";
	cin >> letter;
	
	while (letter != 'H' && letter != 'h' && letter != 'S' && letter != 's') //
	{
		cout << "Please enter H or S: ";
		cin >> letter;	//
	}
}

double calcWeeklyPay( int hours, double payRate) //
{
	return hours*payRate; //
}

double calcWeeklyPay( double annSalary) //
{
	return annSalary/52;   //
}

