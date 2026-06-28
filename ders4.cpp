#include<iostream>
using namespace std;

int main(){
    float sayi1=12.6;

    if(sayi1==12.7f){
        cout<<"sayi "<<sayi1<<" "<<"'ye eşittir.";
    }
    else if(sayi1==12.5f){
        cout<<"sayi 12.5'e eşittir.";
    }
    else{
        cout<<"sayi 12.7 degerinden farklidir";
    }

}