#include<iostream>
using namespace std;
int main()
{
  int sayi,faktoriyel;
  faktoriyel=1;
  cout<<"faktoriyelini bulmak istediginiz sayiyi giriniz"<<endl;
  cin>>sayi;
  for(int i=1;i<=sayi;i++){
  faktoriyel =faktoriyel*i;

   }
    cout<<"sonuc"<<faktoriyel;




}
