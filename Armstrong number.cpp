#include<iostream>
using namespace std;

int main() {
	int number;
	cout << "please enter a number with three digits:\n";
	cin >> number;
	int hundereds, tens, ones;
	hundereds = number / 100;
	tens = (number % 100) / 10;
	ones = (number % 100) % 10;
	int sumofcubes = hundereds * hundereds * hundereds + tens * tens * tens + ones * ones * ones;
	if (number == sumofcubes) {
		cout << number << " is an armstrong number" << endl;
	}
	else {
		cout << number << " is not an armstrong number" << endl;
	}
}
