#include<iostream>
#include<string>
using namespace std;

int main(){
string sayi;
cout<<"Bir sayi giriniz:";
cin>>sayi;
if(sayi[0]=='-'){
    cout<<"Belirtilen sayi "<<sayi.length()-1<<" hanelidir.";
}
else{
    cout<<"Belirtilen sayi "<<sayi.length()<<" hanelidir.";
}
return 0;
}