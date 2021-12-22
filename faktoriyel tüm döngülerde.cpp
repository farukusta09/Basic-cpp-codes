#include<iostream>
using namespace std;
int main() {
	int number, counter = 1, fact = 1;
	cout << "please enter an integer";
	cin >> number;
	
/*for (int i = 1; i <= number; i++) {
		fact *= i;


	}cout << fact;
*/
	/*

	
	
	while (counter <= number) {
		fact *= counter;
		counter++;
	}
	cout << fact;

*/
	do {



		if (number > 0) {
			fact *= counter;
			counter++;
		}
	}
	while (counter <= number );
		cout << fact;
	
	

}

