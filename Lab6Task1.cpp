//Global Variables Exersise

#include <iostream>
using namespace std;

int mainNumber = 0;

int Add(int x, int y) {

	int z = 0;
	z = x + y;
	return z;
}

int Sub(int x, int y) {

	int z = 0;
	z = y - x;
	return z;
}

int Mult(int x, int y) {

	int z = 0;
	z = x * y;
	return z;

}

void main() {

	int input = 0;
	int add = 0;
	int sub = 0;
	int mult = 0;

	cout << "Please enter the integer: " << endl;
	cin >> input;

	add = Add(input, mainNumber);
	sub = Sub(input, mainNumber);
	mult = Mult(input, mainNumber);

	cout << "Addition: " << add << endl;
	cout << "Subtraction: " << sub << endl;
	cout << "Multiplication: " << mult << endl;


}