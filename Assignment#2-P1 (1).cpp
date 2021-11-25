//22.10.2021
//Ömer Faruk USTA
//Lab Assignment#2-P1

#include<iostream>
using namespace std;
int main(){
int n,num1,num2,Addition,Subtraction,Multiplication,Modulo;
float Division;
cout<<"please select the action you want to perform \n";
cout<< "1-Addition\n""2-Division\n""3-Subtraction\n""4-Multiplication\n""5-Modulo\n";

cin>>n;

if(n==1){

cout<<"please enter two integers:\n";
cin>>num1>>num2;
Addition=num1+num2;
cout<<"your result is:"<<Addition<<endl;

       }
  else if(n==2){

    cout<<"please enter two integers:\n";
    cin>>num1>>num2;
    Division=num1/num2;
    cout<<"your result is:\n"<<Division<<endl;
    }

  else if(n==3){
    cout<<"please enter two integers:\n";
    cin>>num1>>num2;
    Subtraction=num1-num2;
    cout<<"your result is:"<<Subtraction<<endl;
    }
    else if(n==4) {
      cout<<"please enter two integers:\n";
      cin>>num1>>num2;
      Multiplication=num1*num2;
      cout<<"your result is:"<<Multiplication<<endl;
    }
    else if(n==5){

      cout<<"Please enter two integers:\n";
      cin>>num1>>num2;
      Modulo=num1%num2;
      cout<<"your result is:"<<Modulo<<endl;

    }
else{
  cout<<"please enter a value between 1 and 5\n";
}

return 0;
}
