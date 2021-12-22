#include<iostream>
using namespace std;
int main() {
	int değer = 6, boşluk, yıldız;
	string space = " ", star = "*";
	yıldız = 1;
	boşluk = 10;
	for (int j = 0; j < değer; j++) {
		for (int i = 0; i < boşluk; i++) {
			cout << space;

		}
		for (int i = 0; i < yıldız; i++) {
			cout << star;
		}
		boşluk -= 2;
		yıldız++;
		cout << endl;
	}
	boşluk = 2;
	yıldız-=2;
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < boşluk; i++) {
			cout << space;

		}
		for (int i = yıldız; i >= 1; i--) {
			cout << star;
		}
		yıldız--;
		boşluk += 2;
		cout << endl;
	}











}
