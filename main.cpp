#include <iostream>

using namespace std;

int f2c(int);
int c2f(int);
void errorHandler();

int main()
{
	int numInput;
	int startingTemp;

	cout << "Welcome to my calculator\n" << "Please put in either 1 for Fahrenheit to Celcius\n";
	cout << "Otherwise enter 2 for Celsius to Fahrenheit\n" << "Choose operation: ";

	// Input
	cin >> numInput;

	cout << "Now please input your starting temperature: ";
	cin >> startingTemp;

	if(numInput == 1)
	{
		f2c(startingTemp);
	}
	else if(numInput == 2)
	{
		c2f(startingTemp);
	}
	else
	{
		cout << "Error...\n\n";
		errorHandler();
	}

	cin.get();

	return 0;
}

int f2c(int n)
{
	int finalNum = (n - 32) / 1.8;
	cout << n << "F is " << finalNum << "C." << endl;

	return finalNum;
}

int c2f(int n)
{
	int finalNum = (n * 1.8) + 32;
	cout << n << "C is " << finalNum << "F." << endl;

	return finalNum;
}

void errorHandler()
{
	int errorInput;
	int convertNum;
	cout << "Please enter a VALID number, 1 for F to C & 2 for C to F: ";
	cin >> errorInput;

	cout << "Input number to convert: ";
	cin >> convertNum;

	if(errorInput == 1)
	{
		f2c(convertNum);
	}
	else if(errorInput == 2)
	{
		c2f(convertNum);
	}
	else
	{
		errorHandler();
	}
}
