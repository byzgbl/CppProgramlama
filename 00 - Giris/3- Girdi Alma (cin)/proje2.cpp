// taban uzunluğu ve yüksekliği kullanıcıdan alınan veri ile üçgenin alanını bulma
#include <iostream>
using namespace std;

int main(){
    int h;
    int taban;
    cout<<"Ucgenin yuksekligini giriniz : ";
    cin>>h;
    cout<<"Ucgenin taban uzunlugunu giriniz : ";
    cin>>taban;
    cout<<"Ucgenin alani : "<<(taban*h)/2;
    return 0;

}