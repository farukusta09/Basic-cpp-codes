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
	
	
	
	for (int i = 0; i < number -1 ; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < (number - i) * 2 - 3; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}

}
int main() {

	yildiz();
}
