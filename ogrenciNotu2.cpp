#include<iostream>
using namespace std;
int main()
{
int ogrenciNotu;


cout<<"lutfen notunuzu giriniz \n";
cin>>ogrenciNotu;
if(ogrenciNotu<0 || ogrenciNotu>100){
cout<<"lutfen gecerli araliklarda bir not giriniz \n";
}

else if(ogrenciNotu<70 && ogrenciNotu>=50){
cout<<"bute kaldiniz \n";
}

else if(ogrenciNotu>=70){
cout<<"gectiniz \n";
}

else{
cout<<"kaldiniz... \n";
}

return 0;
}
