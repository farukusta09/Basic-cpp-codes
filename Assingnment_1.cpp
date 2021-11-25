#include<iostream>
#include<string>
using namespace std;
int main()

{
string name,surname,space=" ",exclamation="!";
int Age;
int year=2021,birth_year;

cout<<"please write your name:"<<endl;
getline(cin,name);

cout<<"please write your surname:"<<endl;
getline(cin,surname);

cout<<"please enter your age:"<<endl;
cin>>Age;

cout<<"hi"<<space<<name<<space<<surname<<space<<Age<<exclamation<<endl;
birth_year=year-Age;

cout<<"your birth year is:"<<birth_year<<endl;
return 0;



}
