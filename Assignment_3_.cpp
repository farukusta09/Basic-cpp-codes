/*23/11/2021
Ömer Faruk USTA
1306200032*/

#include<iostream>
using namespace std;
int main(){
  int choice,Addition,Subtraction,Multiplication,Modulo,num1,num2;
  float Division,num3,num4;
do{
cout<<" "<<endl;
cout<<"****MY MENU****"<<endl;
cout<<"1. Addition"<<endl;
cout<<"2. Subtraction"<<endl;
cout<<"3. Division"<<endl;
cout<<"4. Multiplication"<<endl;
cout<<"5. Modulo"<<endl;
cout<<"6. Exit"<<endl;

cout<<"please enter a choice:"<<endl;
cin>>choice;

switch(choice){

  case 1:
  cout<<"please enter 2 integers:"<<endl;
  cin>>num1>>num2;
  Addition=num1+num2;
  cout<<num1<<"+"<<num2<<"="<<Addition<<endl;
  break;

  case 2:
  cout<<"please enter 2 integers:"<<endl;
  cin>>num1>>num2;
  Subtraction=num1-num2;
  cout<<num1<<"-"<<num2<<"="<<Subtraction<<endl;
  break;

  case 3:
  cout<<"please enter 2 integers:"<<endl;
  cin>>num3>>num4;
  Division=num3/num4;
  cout<<num3<<"/"<<num4<<"="<<Division<<endl;
  break;

  case 4:
  cout<<"please enter 2 integers:"<<endl;
  cin>>num1>>num2;
  Multiplication=num1*num2;
  cout<<num1<<"*"<<num2<<"="<<Multiplication<<endl;
  break;

  case 5:
  cout<<"please enter 2 integers:"<<endl;
  cin>>num1>>num2;
  Modulo=num1%num2;
  cout<<num1<<"%"<<num2<<"="<<Modulo<<endl;
  break;

  case 6:
  break;

  default:
  cout<<"Invalid number!"<<endl;



}
}while(choice!=6);
return 0;
}
