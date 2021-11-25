#include<iostream>
using namespace std;
int main(){

  int ogrenciNotu;

  cout<<"please enter you grade"<< endl;
  cin>>ogrenciNotu;

  if(ogrenciNotu>=70){
    cout<<"you passed"<<endl;

  }
  else if  (ogrenciNotu<70 &&ogrenciNotu>=50){
    cout<<"bute kaldınız"<<endl;

  }
  else {
  cout<<"failed"<<endl;

  }
 return 0;
}
