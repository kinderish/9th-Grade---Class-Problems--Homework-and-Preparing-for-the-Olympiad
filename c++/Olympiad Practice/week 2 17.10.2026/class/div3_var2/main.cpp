#include <iostream>
using namespace std;

long long primaCifra(long long n){
     while (n > 9){
        n /= 10;
     }
     return n;
}

int main(){
    long long x, rez = 0;
    while (cin >> x){ // citim pana la sfarsitul detelor, pentru a iesi folosim un caracter (cred)
        rez = rez *10 + primaCifra(x); // nu merge n = primaCifra(n) de ex
    }
    cout << rez;
}
