//*******************************************
// FILE: LAB 4. Download this file. Fill in your code. Submit it back.
//				You have 1 WEEK to work on this lab.
// DESCRIPTION: Become experts at using Functions. 
// AUTHORS: 
// SESSION INFORMATION: 
// CREATED: 
// LAST MODIFIED: 
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int myRandNumGen(){
	// insert your code here

}

int diceRoll(){
	// insert your code here

}

char coinTossFunction( ){
	// insert your code here


}

double calcAverageDice(int n){
	// n = number of dice rolls
	// insert your code here
	
}

double calcAverageCoin(int n){
	// n = number of coin tosses
	// insert your code here
	
}

// insert your myGame function here


// EXTRA CREDIT
// Game Description:
// Game input:
// Game output:
// A sample illustration:
// insert your code here

int main () {
    // insert code here...
	// srand should be called once
	srand(time(0));	
	
	// Call the function to calculate average. Roll the dice n times. 	
	// Display the average number as seen from 100 rolls
	// insert your code here
	
	// Call the function to toss a coin n times
	// Is your coin biased? What would you bet on?
	// insert your code here
	
	// Assume we are developing a multi-player game. 
	// Each player gets n chances.
	// Each chance: The player tosses a coin. 
	//              If he rolls a head, he gets to roll the dice.
	//				If he rolls a tail, he forfeits the chance and earns a zero.
	//				Add up all such numbers
	// write a function called myGame to implement this game.
	// input arguments: n = number of chances
	// output/return arguments: total = from summation of dice rolls.
	// 
	// Now call your function for 2-players.
	// Calculate player 1's total
	// insert your code here
	
	// Calcualte player 2's total
	// insert your code here
	
	// The highest score wins. Display a message to the winner.
	// insert your code here
	
	// EXTRA CREDIT(Additional 10%): create your own game using dice/coin/playing cards. 
	// write a function inplementing your game and call it in main(here)
	
	
    return 0;
}
