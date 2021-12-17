#include<iostream>
#include<stdlib.h>
//rastgele sayı verecek kütüphana 
#include<time.h>
//ard arda aynı sayı gelmemesi için randomu sıfırlayan kütüphane
using namespace std;

int main() {
	srand(time(NULL));
	//ard arda aynı sayı gelmemesi için randomu sıfırlayan komut
	int rastgelesayi = rand() % 100;
	//random atmaya yarayan komut. % 100 ifadesi 0 ile 100 arasında bir sayi atanmasını sağlar.
	cout << rastgelesayi;
	
}
