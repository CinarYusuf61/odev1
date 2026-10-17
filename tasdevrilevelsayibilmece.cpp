#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));
    char secim;
    
do {

    int sayi = (rand() % 10) +1;
    int tahmin;

cout << "sayi tahmin oyununa hos geldiniz!" << endl;

do{
    
cout << "bir ile on arasinda bir sayi secin: ";
cin >> tahmin;


if(sayi > tahmin){
    cout << "Daha Yuksek" << endl;
}
else if(sayi < tahmin){
    cout << "Daha Dusuk" << endl;
}
else {
    cout << "tebrikler kazandin" << endl;
}

}while(sayi != tahmin);

    cout << "Yeniden oynamak istermisiniz? (e/h): ";
    cin >> secim;

}while(secim == 'e' ||secim == 'E');
    
    cout << "Oynadiginiz icin tesekkurler. Iyi gunler!";
}