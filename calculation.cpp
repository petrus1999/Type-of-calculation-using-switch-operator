// calculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
	double firstnumber, secondnumber, result;
	int Operator;

	cout << "Enter two numbers" << endl;
	cin >> firstnumber >> secondnumber;

	cout << "Type of operator" << endl;
	cout << "1:ADDITION" << endl;
	cout << "2:SUBSTRACTION" << endl;
	cout << "3:MULTIPLICATION" << endl;
	cout << "4:DIVISION " << endl;
	cin >> Operator;

	switch (Operator) {
	case 1:
		result = firstnumber + secondnumber;
		cout << "The addition of" << firstnumber << " and " << secondnumber << " is equal to " << result;
		break;

	case 2:
		result = firstnumber - secondnumber;
		cout << "The substraction of" << firstnumber << " substracted by " << secondnumber << " is equal to " << result;
		break;
	case 3:
		result = firstnumber * secondnumber;
		cout << "The multiplication of" << firstnumber << " by " << secondnumber << " is equal to " << result;
		break;
	case 4:
		if (secondnumber == 0) {
			cout << "you cannot divide by zero please enter another number" << endl;
			cin >> secondnumber;

			result = firstnumber / secondnumber;
			cout << "The division of" << firstnumber << " by " << secondnumber << " is equal to " << result;
			
		}
		else {
			result = firstnumber / secondnumber;
			cout << "The division of" << firstnumber << " by " << secondnumber << " is equal to " << result;


		}
		break;

	default:
		cout << "Invalid Operator selected please enter the number Operator shown above";

	


		
	}

	return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
