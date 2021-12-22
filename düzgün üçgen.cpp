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
------------------------------------------------------------------------------
	
	
	#include<iostream>
using namespace std;

int main() {
	int giriş = 0, boşluk , yıldız;
	
	yıldız = 1;
	cout << "bir değer giriniz\n";
	cin >> giriş;
	boşluk = (giriş - 1);
	for (int j = 0; j < giriş; j++) {
		for (int i = boşluk; i > 0; i--) {
			cout << " ";

		}

		for (int i = 0; i < yıldız; i++) {
			cout << "*";

		}
		
		cout << endl;
		boşluk--;
		yıldız += 2;
	}
}
