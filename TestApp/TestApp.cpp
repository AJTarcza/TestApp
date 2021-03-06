#include "stdafx.h"

using namespace std;

void operate(double num_one, double);

bool initialized = false;

int main()
{
	if (!initialized)
	{
		cout << "Number Operations Program" << endl;
	}	//End if

	bool get_input = true;
	double num_one;
	double num_two;

	while (get_input)
	{
		cout << "Enter a number: ";
		cin >> num_one;

		//Invalid input handling
		if (cin.fail())
		{
			cout << "Invalid Input. Please try again: ";
		}	//End if

		//Invalid input handling
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cin >> num_one;
		}	//End while

		cout << "Enter a second number: ";
		cin >> num_two;

		//Invalid input handling
		if (cin.fail())
		{
			cout << "Invalid Input. Please try again: ";
		}	//End if

		else 
		{
			get_input = false;
		}	//End else

		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cin >> num_two;
		}	//End while

	}	//End while

	//Perform an operation on the numbers
	operate(num_one, num_two);

	//After performing an operation, prompt the user to exit/restart the program
	cout << "Enter 1 to submit new numbers or 2 to exit ";
	int response;
	bool poll = true;

	while (poll)
	{
		cin >> response;

		//Invalid input handling
		if (cin.fail())
		{
			cout << "Invalid Input. Please try again: ";
		}	//End if

		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cin >> response;
		}	//End while

		switch (response)
		{
			case 1:
				initialized = true;
				main();
			case 2:
				poll = false;
				break;
			default:
				cout << "Invalid input. Please try again" << endl;
		}	//End switch

	}	//End while
	
	return 0;

}	//End main

void operate(double num_one, double num_two) {

	cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division" << endl;

	int operation;

	cin >> operation;

	//Invalid input handling
	if (cin.fail())
	{
		cout << "Invalid Input. Please try again: ";
	}	//End if

	while (cin.fail())
	{
		cin.clear();
		cin.ignore();
		cin >> operation;
	}	//End while

	//Operation result storage
	double sum;
	double difference;
	double product;
	double quotient;

	switch (operation)
	{
		case 1:
			sum = num_one + num_two;
			cout << "Sum of " << num_one << " and " << num_two << " is " << sum << endl;
			break;
		case 2:
			difference = num_one - num_two;
			cout << "Difference of " << num_one << " and " << num_two << " is " << difference << endl;
			break;
		case 3:
			product = num_one * num_two;
			cout << "Product of " << num_one << " and " << num_two << " is " << product << endl;
			break;
		case 4:
			quotient = num_one / num_two;
			cout << "Difference of " << num_one << " and " << num_two << " is " << quotient << endl;
			break;
		default:
			cout << "Invalid operation code. Please Try Again" << endl;
			operate(num_one, num_two);
	}	//End switch

	return;

}	//End operate



