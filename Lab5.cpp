//*******************************************
// FILE: LAB 5. 
// DESCRIPTION: Passing arrays to functions. 
// AUTHORS: 
// SESSION INFORMATION: 
// CREATED: 31 Oct 2013
// LAST MODIFIED: 31 Oct 2013
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

// Function Prototypes 
void getTestScores( double[], int);
double getTotal( double[], int);
double getLowest( double[], int);

int main () {
	
	const int SIZE = 4;		// Array size
	double testScores[SIZE], // Array of test scores
	total,			 // Total of the scores
	lowestScore,		 // Lowest test score
	average;			 // Average test score
	
	// Set up the numeric output formatting. 
	// See Appendix for notes on how this manipulator works.
	cout << setprecision(4);
	
	// Get the test scores from the user
	getTestScores(testScores, SIZE );
	
	// Get the total of the test scores
	total = getTotal(testScores, SIZE );
	
	// Get the lowest test score
	lowestScore = getLowest(testScores, ?? );
	
	// Subtract the lowest score from the total.
	// insert your code here
	 total = total - lowestScore;
	
	// Calculate the average. Divide by 3 because 
	// the lowest score was dropped
	// insert your code here
	averageScore = total/3;
	
	// Display the average
	cout << "The average with the lowest score"
	<< " dropped is " << average << endl;
	
	
	return 0;
}

//********************************************************
// The getTestScores function accepts an array and its size
// as arguments. It prompts the user to enter test scores,
// which are stored in the array. Notice that we are not 
// returning anything from this function. 
// ********************************************************

void getTestScores( ??, ?? )
{
	// Loop counter
	int index;
	
	// Get each test score.
	// insert your code here
	for (index=0; index<SIZE; index++)
	{
		cout << "The score you got in test " << (index + 1) << ": ";
		cin >> TestScores[SIZE];
	}
	    cout << "The score you entered are: ";
		for (index=0; index<SIZE; index++)
	{
		cout << " " << TestScores[SIZE] << endl;
		}
		return TestScores;
}

//**********************************************************
// The getTotal function accepts a double array
// and its size as arguments. The sum of the array's
// elements is returned as a double.
//**********************************************************

double getTotal(??, ??)
{
	double total = 0; // Accumulator
	
	// Add each element to total
	// insert your code here

	
	// return the total
	return total;
	
}

//*********************************************************
// The getLowest function accepts a double array and its
// size as arguments. The lowest value in the array is
// returned as a double.
//*********************************************************

double getLowest(??, int size)
{
	double lowest;
	
	// Get the first array's element
	lowest = array[0];
	
	// Step through the rest of the array. When a value
	// less than the lowest is found, assign it to lowest
	// insert your code here
	
	// Return the lowest value
	// insert your code here
}








