#include <iostream>
#include <string>
using namespace std;

main(){
    string kata;

    getline(cin, kata);

    for (int i = 0; i < kata.length(); i++){
        kata[i] = toupper(kata[i]);
    }

    cout << kata;

}