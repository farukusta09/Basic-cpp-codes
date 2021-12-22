#include<iostream>
using namespace std;
void yildiz() {
	int number;
	cout << "pleaase enter an integer" << endl;
	cin >> number;
	for (int j = 1; j <= number; j++)
	{
		
		for (int i = 1; i <= number-j; i++) {
			cout << " ";
		}
		
		
		
		for (int i = 1; i <= (j)*2-1; i++)
		{
			cout << "*";

		}
		cout << endl;
	}
}



int main() {
	

	yildiz();









}
