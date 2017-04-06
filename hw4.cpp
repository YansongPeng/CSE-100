//*******************************************
// FILE: hw4
// DESCRIPTION: Understanding usage of classes
// AUTHOR: 
// CREATED: 
// LAST MODIFIED: 
// SESSTION:
// 
//*******************************************

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>

using namespace std;

class Account
{
  private:
	double balance; // Account balance
	double interestRate; // Interest rate for the period
	double interest; // Interest earned for the period
	int transactions; // number of transactions
	
  public: 
	// constructor 
	Account(double iRate = 0.045, double bal = 0)
	{
		balance = bal;
		interestRate = iRate;
		interest = 0;
		transactions = 0;		
	}
	
	void setInterestRate(double iRate)
	{
		interestRate = iRate;
	}
	
	void makeDeposit(double amount)
	{
		balance += amount;
		transactions++;
	}
	
	bool withdraw(double amount);
	
	void calcInterest()
	{
		interest = balance*interestRate;
		balance += interest;
	}
	
	double getInterestRate() const
	{ 
		return interestRate;
	}
	
	double getBalance() const
	{
		return balance;
	}

	double getInterest() const
	{
		return interest;
	}
	
	int getTransactions() const
	{
		return transactions;
	}

};

bool Account::withdraw(double amount)
{
	if ( balance < amount ) {
		return false;
	}else {
		balance -= amount;
		transactions++;
		return true;
	}

}

// Function Prototypes
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main() {

	Account savings; //Savings account object
	char choice;     // Menu selection
	
	// set numeric output formatting
	cout << fixed << showpoint << setprecision(2);
	
	do{
		// Display the menu and get a valid selection
		displayMenu();
		cin >> choice;
		
		while (toupper(choice)<'A'||toupper(choice)>'G') {
			cout << "Please make a choice in the range of A through G";
			cin >> choice;
		}
		
		// Process the users menu seletion
		switch (choice) {
			case 'a':
			case 'A':
				cout << "The current balance is $";
				cout << savings.getBalance() << endl;
				break;
			case 'b':
			case 'B':
				cout << "There have been ";
				cout << savings.getTransactions() << " transactions" << endl;
				break;
			case 'c':
			case 'C':
				cout << "Interest earned for this period: $";
				cout << savings.getInterest() << endl;
				break;	
			case 'd':
			case 'D':
				makeDeposit(savings);
				break;				
			case 'e':
			case 'E':
				withdraw(savings);
				break;
			case 'f':
			case 'F':
				savings.calcInterest();
				cout << "Interest added. \n";
				break;
				
			default:
				break;
		}
	}while (toupper(choice)!= 'G');
	
	return 0;
	
}//closes main	

//****************************************************************
// Definition of function displayMenu. This function
// displays the user's menu on the screen.
//****************************************************************
void displayMenu()
{
	cout << "\n		MENU\n";
	cout << "--------------------------------------- \n";
	cout << "A) Display the account balance \n";
	cout << "B) Display the number of transactions \n";
	cout << "C) Display interest earned for this period\n";
	cout << "D) Make a deposit \n";
	cout << "E) Make a withdrawal \n";
	cout << "F) Add interest for this period \n";
	cout << "G) Exit the program \n";
	cout << "Enter your choice: ";
	
}

//****************************************************************
// Definition of function makeDeposit. This function
// accepts a reference to an Account object. The user is prompted for
// the dollar amount of the deposit. and the makeDeposit
// memeber of the Accoutn object is then called.
//****************************************************************
void makeDeposit(Account &acnt)
{
	double dollars;
	cout << "Enter the amount of the deposit: ";
	cin >> dollars;
	cin.ignore();
	acnt.makeDeposit(dollars);
}

//****************************************************************
// Definition of function withdraw. This function
// accepts a reference to an Account object. The user is prompted for
// the dollar amount of the withdraw. and the withdraw
// memeber of the Accoutn object is then called.
//****************************************************************
void withdraw(Account &acnt)
{
	double dollars;
	cout << "Enter the amount of the withdrawal: ";
	cin >> dollars;
	cin.ignore();
	if (!acnt.withdraw(dollars)) {
		cout << "ERROR: Withdrawal amount too large. \n";
	}
}