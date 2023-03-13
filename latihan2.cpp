#include <iostream>
using namespace std;

int main(){
    int bil; //int = numeric
    string status; //string = character
    cout << "Masukkan Bilangan = " ; //cout = display
    cin >> bil; //cin = accept

    if (bil == 0)
    status = "nol";
    else if (bil % 2 == 0)
    status = "genap";
    else
    status = "ganjil";

    cout << "bilangannya = " << status; //display + status
}