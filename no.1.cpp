#include <iostream>

using namespace std;

int main(){
    cout << "------------------------------------------------------------" << endl;
    cout << "                 PROGRAM PENENTUAN BILANGAN                " << endl;
    cout << "------------------------------------------------------------" << endl;

    int angka;
    int bilanganGanjil;
    int bilanganGenap;
    int bilanganPrima;

    do{  //bilangan ganjil
        cout << "masukan batas angka positif = ";
        cin >> angka;
    } while (angka <= 0);

    cout << "bilangan ganjil antara 1 dan " << angka << " yaitu = ";
    for (int j = 1; j<= angka; j++)
    {
        if (j % 2 !=0) cout << j << " ";
        if (j % 2 !=0) bilanganGanjil +=j;
    } cout << endl;

    //bilangan genap
        cout << "bilangan genap antara 1 dan " << angka << " yaitu = ";
        for (int k = 1; k <= angka; k++){
            if (k % 2 == 0) cout << k << " ";
            if (k % 2 == 0) bilanganGenap +=k;
        } cout << endl;

    //bilangan prima
         cout << "bilangan prima antara 1 dan " << angka << " yaitu = ";
         for (int i = 2; i <= angka; i++){
            int bilanganPrima = 1;
            for (int j = 2; j*j <= i; j++){
                if (i % j == 0){
                    bilanganPrima = 0;
                    break;
                }
            } if (bilanganPrima == 1){
                cout << i << " ";
            }

         } cout << endl;

         cout << "jumlah semua bilangan ganjil antara 1 dan " << angka << " yaitu = " << bilanganGanjil << endl;
         cout << "jumlah semua bilangan genap antara 1 dan " << angka << " yaitu = " << bilanganGenap << endl;
         cout << "jumlah semua bilangan prima antara 1 dan " << angka << " yaitu = " << bilanganPrima << endl;

         //faktor-faktor
         cout << "faktor-faktor dari bilangan ganjil tersebut adalah = ";
         for (int s = 1; s <= bilanganGanjil; s++){
            if (bilanganGanjil % s == 0){
                cout << s << " ";
            }
         }
         cout << endl;

         cout << "faktor-faktor dari bilangan genap tersebut adalah = ";
         for (int t = 1; t <= bilanganGenap; t++){
            if (bilanganGenap % t == 0){
                cout << t << " ";
            }
         }
        cout << endl;

        cout << "faktor-faktor dari bilangan prima tersebut adalah = ";
        for ( int u = 1; u <= bilanganPrima; u++){
                if (bilanganPrima % u == 0){
                  cout << u << " ";
                }
        }
        cout << endl;
        return 0;
    }


