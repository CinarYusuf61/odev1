#include <iostream>
using namespace std;
int main (){
    char secim;
    do {
        double sayi1, sayi2;
    char islem;
    cout << "hesaplamak istediginiz islemi girin: ";
    cin >> sayi1 >> islem >> sayi2;
    if (islem == '+'){
    cout << sayi1 + sayi2 << endl;
    }
    else if (islem == '-'){
    cout << sayi1 - sayi2 << endl;
    }
    else if (islem == '*'){
    cout << sayi1 * sayi2 << endl;
    }
    else if (islem == '/'){
    cout << sayi1 / sayi2 << endl;
    }
    else {cout << "Gecersiz islem!";}

cout << "Yeniden islem yapmak istermisiniz? (e/h): ";
cin >> secim;
    } while(secim == 'e' ||secim == 'E');
    cout << "Iyi gunler!";
    return 0;
}