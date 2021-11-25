//22.10.2021
//Ömer Faruk USTA
//Lab Assignment#2-P2

#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<"how many characters do you want to enter:\n";
 cin>>n;
 char dizi[n];

 cout<<"Please do not enter numbers for the system to work correctly.\n";
 cout<<"please enter a word\n";
 cin>>dizi;

 for(int i=0; i < n; i++){
   if(int (dizi[i]) >= 97 )
    dizi[i] = char(int(dizi[i]) - 32 );
   else
    dizi[i] = char(int(dizi[i]) + 32 );
 }
 cout<<dizi;
return 0;
}
