#include <iostream>
#include <utility>
using namespace std;
int bakiye = 1000;
int giren_para;
int cikan_para;
int eski_cikan_para;
int main (){
char secim;

    do{
    int yeni_bakiye = bakiye + giren_para - cikan_para;
    string islem;

    cout << "Bankamiza hos geldiniz!" << endl;

    cout << "Lutfen yapmak istediginiz islemi secin" << endl;
    cout << "(bakiye_sorgula, para_yatir, para_cek)" << endl;
    cin >> islem;

    if(islem == "bakiye_sorgula"){ 
        cout << "Guncel bakiyeniz: "<< yeni_bakiye << "TL" << endl;
        cout << "Baska islem yapmak istermisiniz? (e/h)" << endl;
        cin >> secim;
    }

    else if(islem == "para_yatir"){
        cout << "Kac TL yatirmak istersiniz?" << endl;
        cin >> giren_para;
       cout << "Baska islem yapmak istermisiniz? (e/h)" << endl;
        cin >> secim;
    }

    else if(islem == "para_cek"){
        cout << "Kac TL cekmek istersiniz?" << endl;
        int eski_cikan_para = exchange(cikan_para, 0);
        cin >> cikan_para;
        if(cikan_para > yeni_bakiye){
            cout << "YETERSIZ BAKIYE" << endl;
            cout << "isleminiz iptal edildi" << endl;
            cikan_para = eski_cikan_para;
        
        }
        cout << "Baska islem yapmak istermisiniz? (e/h)" << endl;
        cin >> secim;
        int cikan_para = exchange(eski_cikan_para, 0);
    }
    else{
        cout << "Gecersiz islem" << endl;
        cout << "Tekrar denemek istermisiniz? (e/h)" << endl;
        cin >> secim;
    }

}while(secim == 'e' ||secim == 'E');

cout << "Iyi gunler dileriz!";
return 0;
}