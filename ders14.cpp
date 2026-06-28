#include<iostream>
using namespace std;

void sayi1(int x){
    cout<<x<<endl;
}
void sayi2(int y){
    cout<<y<<endl;
}

int sayi3(int a){
    return a;
}

int sayi4(int b){
    return b;
}

int main(){
    /*cout<<sayi1(5)+sayi2(10); 
    void değer döndüremediği için hata verdi 
    "invalid operands of types ‘void’ and ‘void’ to binary ‘operator+’"*/

    cout<<sayi3(5)+sayi4(10)<<endl;
    sayi1(7); //bu çalışır.
    //sayi1(10)+sayi2(4);  ancak bu çalışmaz
}