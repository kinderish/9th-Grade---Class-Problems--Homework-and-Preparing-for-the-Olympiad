#include <iostream>
using namespace std;

int main() {
    long long int n,cont;
    cin >> n;
    cont = 0;
    if(n!=0){
        while (n>0){
            n = n / 10; // n /= 10
            cont = cont + 1; // cont++
        }

    }else{
        cont = 1;
    }
    cout << cont;

}
