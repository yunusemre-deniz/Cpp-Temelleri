#include<iostream>
#include<string>
using namespace std;


void selamla(){
    cout<<"hoşgeldiniz"<<endl;
}

void stringDeger(string k){
    cout<<k<<endl;

}

void sayi(int x){
    cout<<"Girilen Değer: "<<x<<endl;
}

int main(){
    sayi(34);
    selamla();
    stringDeger("naber");


}