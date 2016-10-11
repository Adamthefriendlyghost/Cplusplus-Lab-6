//Age Program

#include <iostream>
using namespace std;

bool isValidAge(int x) {

	if (x > 0 && x < 123) {
		return true;
	}
	else {
		return false;
	}
}

int oldest(int a, int b, int c) {

	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else if (c > a && c > b) {
		return c;
	}
}

int averageAge(int a, int b, int c) {

	int out = 0;
	out = (a + b + c) / 3;
	return out;

}

int main()
{
	int age1 = 0;
	int age2 = 0;
	int age3 = 0;
	double average = 0;
	int oldestout = 0;
	cout << ("Enter first age: ");
	cin >> age1;

	cout << ("Enter second age: ");
	cin >> age2;

	cout << ("Enter third age: ");
	cin >> age3;

	if (!isValidAge(age1)) // check value is within a sensible range
	{
		cout << "Age 1 is not valid";
	}
	else if (!isValidAge(age2))
	{
		cout << "Age 2 is not valid";
	}
	else if (!isValidAge(age3))
	{
		cout << "Age 3 is not valid";
	}
	else
	{
		oldestout = oldest(age1, age2, age3); // display highest age value
		average = averageAge(age1, age2, age3); // calculate average
		cout << "Average age is: " << average << endl;
		cout << "Oldest age is: " << oldestout << endl;
	}

	return 0;
}
