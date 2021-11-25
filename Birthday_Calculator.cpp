#include <iostream>
using namespace std;
int main(){

  int age,year,fage,mage,bage,yb,fb,mb,bb;
  cout<<"whats your age?"<<endl;
  cin>>age;
  cout<<endl;

  cout<<"which year do you live?"<<endl;
  cin>> year;
  cout<<endl;

  cout<< "what is your fathers age?"<<endl;
  cin>>fage;
  cout<<endl;

  cout<<"what is your moms age?"<<endl;
  cin>>mage;
  cout<<endl;

  cout<<"what is your brothers age?"<<endl;
  cin>>bage;
  cout<<endl;

  yb = year-age;
  fb = year-fage;
  mb = year-mage;
  bb = year-bage;

  cout<<"your birthday is:"<<yb<<endl;
  cout<<"your fathers birthday is:"<<fb<<endl;
  cout<<"your moms birthday is:"<<mb<<endl;
  cout<<"your brothers birthday is:"<<bb<<endl;

}
