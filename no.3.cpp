#include <iostream>

using namespace std;

int main(){
    // f_n = f_n1 + f_n2

    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "--------------------" << endl;
    cout << "  DERET FIBONACCI " << endl;
    cout << "--------------------" << endl;
    cout << "masukan nilai ke-n: ";
    cin >> n;

    f_n1 = 1;
    f_n2 = 0;
    cout << f_n2 << " ";
    cout << f_n1 << " ";
     for (int i = 1; i < n; i++){
            f_n = f_n1 + f_n2;
            f_n2 = f_n1;
            f_n1 = f_n;
            cout << f_n << " ";
     }

     cin.get();
    return 0;
}
