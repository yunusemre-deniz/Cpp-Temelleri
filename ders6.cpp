#include<iostream>
#include<string>
using namespace std;


int main(){
    cout<<"Lütfen T.C. kimlik no giriniz:";
    string tcKimlik;
    cin>>tcKimlik;

    if(tcKimlik.length()==11){

        

    }
    else if(tcKimlik.length()>11){
        cout<<"Fazla rakam girdiniz. Tekrar deneyiniz"<<endl<<"Lütfen T.C. kimlik no giriniz:";
        cin>>tcKimlik;
        if (tcKimlik.length()==11)
        {
            cout<<"T.C. kimlik no doğru. Yönlendiriliyorsunuz."<<endl;
        }

    }
    else{
        cout<<"Eksik ya da hatali giriş yaptiniz"<<endl<<"Lütfen T.C. kimlik no giriniz:"<<endl;
        cin>>tcKimlik;
        if (tcKimlik.length()==11)
        {
            cout<<"T.C. kimlik no doğru. Yönlendiriliyorsunuz."<<endl;
        }
        else{
            cout << "Yine yanlis girdiniz! Ama daha fazla kod yazmadigimiz icin program kapaniyor."<<endl;
        }
        
    }
    return 0;
}