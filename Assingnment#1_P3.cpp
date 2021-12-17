#include<iostream>
using namespace std;
int main()
{
float num1,num2;
float subtraction,addition,multiplication,division;
cout<<"please enter two integers:"<<endl;
cin>>num1>>num2;
addition=num1+num2;
subtraction=num1-num2;
multiplication=num1*num2;
division=num1/num2;

cout<<num1<<"+"<<num2<<"="<<addition<<endl;
cout<<num1<<"-"<<num2<<"="<<subtraction<<endl;
cout<<num1<<"/"<<num2<<"="<<division<<endl;
cout<<num1<<"*"<<num2<<"="<<multiplication<<endl;

return 0;



}
