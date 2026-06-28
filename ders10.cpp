#include<iostream>
#include<string>

using namespace std;

int main (){

    string tcKimlikNo;
    cout<<"T.C. Kimlik No giriniz:"<<endl;
    cin>>tcKimlikNo;
    cout<<"Girilen T.C. Kimlik No:"<<tcKimlikNo<<endl;

    if(tcKimlikNo.length()==11){
        cout<<"T.C. Kimlik No doğru. Anasayfaya yönlendiriliyorsunuz."<<endl;
    }
    
    else{

        while (tcKimlikNo.length()>11||tcKimlikNo.length()<11)
        {
            cout<<"Hatali T.C. Kimlik No. Eksik ya da fazla karakter girildi. Lütfen tekrar giriniz:"<<endl;   
            cin>>tcKimlikNo;  
            cout<<"T.C. Kimlik No doğru. Anasayfaya yönlendiriliyorsunuz."<<endl;
        }

    }

    
}