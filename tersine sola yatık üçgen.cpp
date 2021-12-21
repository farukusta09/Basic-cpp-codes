#include<iostream>
using namespace std;
int main() {
	int number;
	cout << "pleaase enter an integer" << endl;
	cin >> number;
	for (int j = 0; j < number; j++) 
	{
		for (int i = 0; i < number - j; i++) 
		{
			cout << "*";
		}
		cout << endl;
	}










}
