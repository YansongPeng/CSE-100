//*******************************************
// FILE: firstcpp
// DESCRIPTION: CHapter 3 & 4. Examples. User Menu. Calculate the area of various shapes.
// AUTHOR: Archana Paladugu
// CREATED: September 16, 2013.
//LAST MODIFIED: September 16, 2013.
// 
//*******************************************

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // insert code here...
	int number;
	
	// define problem
	// How do we validate an entry? 
	// Say if the user enters 1, its valid. 
	// If he enters an entry that is not 1, its invalid.
	// we could get away with BRANCHES in this case
	// if-else
	
	cout << "Enter a number: ";
	cin >> number;
	
	if (number==1) {
		cout << "accepted";
	}else {
		cout << "invalid number";
	}

	// lets modify the problem
	// We want to continue pestering the user untill he enters a 1
	// we would need a LOOP

	cout << "Enter a number: ";
	cin >> number;
	
	while (number!=1) {
		// ask the user the enter another number
		cout << "Enter a number: ";
		cin >> number;
	}
	
	// Problem with the above while loop:
	// we wrote the same piece of code "enter a number" twice !
	// it can be avoided using do while loop
	
	do{
		// do this atleast once
		cout << "Enter a number: ";
		cin >> number;
		
	}while (number!=1); // repeat if this condition is true.
	

		
    return 0;	
}
