#include<iostream>
using  namespace std;
int main() {

	for (int j = 1; j < 6; j++) {

		 for (int i = 0; i < 5 - j; i++) {
			cout << " ";
		}

		for (int i = 0; i < j; i++) {
			cout << "*";

		}

		cout << endl;
	}

	/*

	for (int j = 1; j < 6; j++) {

		for (int i = 4; i> j-1; i--) {
			cout << " ";
		}

		for (int i = 0; i < j; i++) {
			cout << "*";

		}




		cout << endl;




	}
	*/





	/*

	for (int j = 0; j < 5; j++) {

		for (int i = 4; i > j; i--) {
			cout << " ";
		}

		for (int i = 0; i <= j; i++) {
			cout << "*";

		}




		cout << endl;




	}*/


	return 0;


}
