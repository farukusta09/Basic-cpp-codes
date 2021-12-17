#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {
	 int kullanici, random;
	
	cout << "1 ile 10 arasinda bir deger giriniz:";
	cin >> kullanici;

	if (kullanici <= 10 && kullanici >= 1) {
		srand(time(NULL));
		random = rand() % 10 + 1;
		//bu %10+1 ifadesi 1 ile 10 arasında bir değer random atılmasını sağladı
		if (random == kullanici) {
			cout << "dogru tahmin..." << endl;
			cout << "tutulan sayi suydu: " << random << endl;
			}
	
		else
		{
			cout << "yanlis tahmin...\n";
			cout << "tutulan sayi suydu: " << random;
		}
	
	
	
	
	
	}


	else {
		cout << "verilen aralık dışında değer girdiniz...";
	}
}
