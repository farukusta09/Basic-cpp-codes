#include <iostream>
using namespace std;
int main(){
int age,fathersage,differences_of_ages,moms_age1,family_age;

cout<<"please enter your age:";
cin>>age;
cout<<endl;
cout<<"your age is:"<<age<<endl;
cout<<endl;


fathersage = age+31;
cout<<"fathersage must be at least:"<<fathersage<<endl;
cout<<endl;

cout<<"how much older your father than your mother?"<<endl;
cin>>differences_of_ages;
cout<<endl;

moms_age1 = fathersage-differences_of_ages;
cout<<"your moms age is:"<<moms_age1<<endl;
cout<<endl;

family_age = age+fathersage+moms_age1;
cout<<"your total family age is:"<<family_age<<endl;








}
