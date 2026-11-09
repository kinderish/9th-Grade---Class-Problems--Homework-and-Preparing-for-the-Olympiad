#include <iostream>
using namespace std;

int main(){
    long long int n, primaCifra, pc, nr = 0, p = 1, copie;
    cin >> n;
    copie = n;
    if(n == 0){
        nr = 1;
    }
    while (n > 9){
        p = p * 10;
        n = n / 10;
    }

    primaCifra = copie / p;
    while (copie > 0){
        if(p != 0){
            pc = copie / p;
            if (primaCifra == pc){
                nr = nr + 1;
            }
            copie = copie % p;
            p = p / 10;
        }
    }
    cout << nr;
}
