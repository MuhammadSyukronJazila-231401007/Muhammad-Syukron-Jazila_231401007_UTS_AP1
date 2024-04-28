#include <iostream> // #Include <Stdio.H>
#include <math.h> //#inlcude "math.h"

using namespace std;

int main() {  // float main(void) {
    system("CLS"); // SYSTEM("CLS"):

    int n;
    cout << "Insert a number: ";
    cin >> n; // cin << n;

    if (n <= 1) { // if (n >= 1)
        cout << n << " bukanlah bilangan prima."; 
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) { // (int i = 1; i <= sqrt(n); i++)
            if (n % i == 0) { // if (n % 1 == 2)
                isPrime = false;
            }
        }
        
        if(isPrime) {
            cout << n << " Merupakan bilangan prima."; //  coute >> n << "Merupakan bilangan prima.";
        } else {
            cout << n << " bukanlah bilangan prima."; // cout >> n << " bukanlah bilangan prima.";
        }
    }
    return 1;
}
