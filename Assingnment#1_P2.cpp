#include<iostream>
using namespace std;
int main()
{
float fahrenheit,celsius,kelvin;
cout<<"please enter a fahrenheit value:"<<endl;
cin>>fahrenheit;
celsius=(fahrenheit-32)*5/9;
kelvin=(fahrenheit-32)*5/9+273.15;
cout<<"Conversion result:"<<fahrenheit<<" fahrenheit = "<<celsius<<" celsius = "<<kelvin<<" kelvin "<<endl;
return 0;

}
