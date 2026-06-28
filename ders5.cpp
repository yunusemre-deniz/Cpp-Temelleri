#include<iostream>
using namespace std;

int main(){
    int sayi;
    cout<<"Bir sayi giriniz.";
    cin>>sayi;
    if(sayi >=-9 && sayi<=9){
        cout<<"Bu bir rakamdir"<<endl;
    }
    else{
        cout<<"Bu bir sayidir"<<endl;
    }
}
