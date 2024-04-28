#include <iostream>
#include <iomanip>
using namespace std;

main(){
    int waktu,detik,menit,jam,sisa;

    a:
        cin >> waktu;
    
    if (waktu < 1){
        cout << "Inputan waktu tidak boleh negatif" << endl;
        goto a;
    }
    
    jam = waktu / 3600;
    sisa = waktu % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    cout << setw(2) << setfill('0') << jam << ":"; 
    cout << setw(2) << setfill('0') << menit << ":";
    cout << setw(2) << setfill('0') << detik;
}