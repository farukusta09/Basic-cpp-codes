#include<iostream>
#include<string>
using namespace std;
int main()
{
string name,initial,surname,dot=".",space=" ",fullName;
cout<<"enter your first name"<<endl;
cin>>name;

cout<<"enter your initial"<<endl;
cin>>initial;

cout<<"enter your surname \n";
cin>>surname;

fullName=name+space+initial+dot+space+surname;
cout<<"your full name is:"<<fullName;

return 0;
}
