#include <iostream>
using namespace std;
long long putere(long long n){
    long long p = 1;
    while (n>9){
        p = p*10;
        n = n / 10;
    }
    return p;
}
int main() {
    int x, a, i, pc, nr = 0;
    cin >> a;
    for (i = 1; i <= a; i++){
        cin >> x;
        pc = x / putere(x);
        nr= nr*10 + pc;
    }
    cout << nr;
}
