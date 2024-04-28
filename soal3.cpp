#include <iostream>
#include <string> 
using namespace std;

main(){
    string angka;
    int digit,total = 0; 

    cin >> angka;

    for (int i = 0; i < angka.length(); i++){
        int jumlah = 0;
        digit = stoi(string(1,angka[i]));

        for (int j = 1; j <= digit; j++){
            if(digit % j == 0) jumlah++;
        }
       
        if(jumlah == 2) total += digit;
    }

    cout << total;
}