//*******************************************
// FILE: quiz
// DESCRIPTION: take home quiz
// AUTHOR: Archana Paladugu
// CREATED: Sep 9, 2013.
//LAST MODIFIED: Sep 9, 2013.
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main () {
	
    // insert code here...
	int a = 10;
	// error?   Yes
	// correction   Need a semicolon
	
	int b = 10;
	//error?   Yes
	// correction    int b = 10;
	
	int a = 10.89;
	// error? If yes, why?  int can only use for integers.
	// correction     float a = 10.89
	
	int myfirstvariableever = 0;
	int myFirstVariableEver = 0;
	// Which scenario is more readable?  The second one
	// Are these two different variables?      No, they are the same.
	
	int a = 10;
	// why is this a bad initialization? Correct it.  int a = 10 
	
	// I would like to store the value 144,000 into a variable. 
	// Which options work in this case?   The "long" options
	int a = 144000;
	char a = 144000;
	short a = 144000;
	long a = 144000;
	long b = 144000;
	long c = a*b;
	
	char user = "m";
	// I used double quotes instead of single quotes. 
	// Will it result in an error?   Yes, it will.
	
	string greeting = "hello";
	string quote = 'have a nice day';
	// error? If yes, why?  The second one needs double quotes
	// correction
	

	double p = 3.14;
	float p = 3.14;
	//Can we declare p twice?
	// error? If yes, why? 
	// correction  No, it can't. It's redefinition.  
	
	// scenario 1
	double r;
	cout << "Enter radius of the circle:";
	cin >> r;
	// scenario 2
	int r;
	cout << "Enter radius of the circle:";
	cin >> r;
	// What happens when you enter your radius value of 22.2?
	// Answer   22.2
	
	// What happens when you enter a value of -22.2? Can radius be negative?
	// Answer    Yes, it can.
	// What should be done?
	
	float area = p*r*r;
	cout << area;
	float rSquared = pow(r,2);
	cout << rSquared*p;
	cout << "\n";
	// Would these two values be different?
	// Answer   No, these two values are the same.
	
	float a = 100.33;
	int b;
	b = a; 
	cout << b;
	// Will b contain 100.33 ?  No, it won't. b contain 100.
	
	// scenario 1
	int a = 100;
	int b = 3;
	double c = a/b;
	cout << c;
	// scenario 2
	float a = 100;
	int b = 3;
	double c = a/b;
	cout << c;
	// Comment in the difference in outputs?    Yes, they are in the difference in outputs. Scenario 1 is 33; Scenario 2 is 33.333.
	
	// scenario 3
	float a = 100;
	float b = 3;
	int c = a/b;
	cout << c;
	// output?   33
	
	// TRY 3 MORE SCENARIOS WITH DIFFERENT VARAIALBLE DATA-TYPES
	// AND WRITE DOWN THE OUTPUT

	//scenario 1
	int a = 50;
	int b = 30;
	double c = a/b;
	cout<<c;
	// output: 1

	//scenario 2
	float a = 50;
	float b = 30;
	int c = a/b;
	cout<<c;
	// output: 1

	//scenario 3
	float a = 50;
	int b = 30;
	double c = a/b;
	cout<<c;
	// output: 1.66667


	
    return 0;
}
