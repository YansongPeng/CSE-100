//*******************************************
// FILE: Simulate
// DESCRIPTION: Functions. 
// AUTHOR: Archana Paladugu
// CREATED: Oct 2, 2013.
//LAST MODIFIED: Oct 2, 2013.
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int myRandNumGen(){
	
	int num = rand();
	return num;
}

int diceRoll(){
	int num = (myRandNumGen()%6)+1;
	return num;
}

char coinTossFunction( ){
	char coinToss;
	coinTossValue = (myRandNumGen()%2); // 0 or 1
	switch (coinTossValue) {
		case 0:
			coinToss = 'H';
			break;
		case 1:
			coinToss = 'T';
			break;
		default:
			break;
	}
	
	return coinToss;
}

int main () {
    // insert code here...
	// srand should be called once
	srand(time(0));
	
	int diceRoll1;
	
	// simulate a dice roll
	// numbers btw 1 and 6
	
	//diceRoll1 = (myRandNumGen()%6)+1;
	//cout << diceRoll1;

	
	// observe 100 dice rolls
	for (int i=0; i<=100; i=i+1) {
		diceRoll1 = (myRandNumGen()%6)+1;
		cout << diceRoll1 << endl;
	}

	
	// roll the dice 10 times. If the total is greater than 20, win
	// 3 4 5 6 1 2
	int total;
	for (int i=0; i<3; i=i+1) {
		diceRoll1 = (myRandNumGen()%6)+1;
		cout << "dice roll" << diceRoll1 << endl;
		total = diceRoll1 + total ;
		cout << "total " << total << endl;
		
	}
	if (total>20) {
		cout << "you win";
	}

	
	// how many 6's in 10 rolls
	int counter=0;
	for (int i = 0; i<10; i=i+1) {
		// insert code here
		diceRoll1 = (myRandNumGen()%6)+1; //
		// check for a 6
		if (diceRoll1==6) {
			// update counter
			counter = counter + 1;
		}
		
	}
	
	cout << "number of 6s:" << counter;
	
	// how many rolls are required to get 20 6s
	int counter_num_6 = 0;
	int num_rolls = 0;
	
	while ( counter_num_6 !=20  ) {
		
		diceRoll1 = (myRandNumGen()%6)+1;
		num_rolls = num_rolls+1;
		
		if (diceRoll1==6) {
			counter_num_6 = counter_num_6+1;
		}
		
	}
	
	cout << "number of rolls needed to get 20 6s:" << num_rolls;
	
	
	// simulate coin toss
	// H or T --> 0/1
	char coinToss;
	coinTossValue = (myRandNumGen()%2); // 0 or 1
	switch (coinTossValue) {
		case 0:
			coinToss = 'H';
			break;
		case 1:
			coinToss = 'T';
			break;
		default:
			break;
	}
	
	cout << coinTossFunction( );
	

    return 0;
}
