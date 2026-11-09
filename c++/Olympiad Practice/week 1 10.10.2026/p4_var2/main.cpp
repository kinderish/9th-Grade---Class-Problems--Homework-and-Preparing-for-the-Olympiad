#include <iostream>

using namespace std;

int main()
{
     long long int n, p = 1, c;
    cin >> n;
    c=n;

    while (n>0){
        p *= 10;
        n /= 10;
    }
    p /= 10; // asa sau mutam cout din while dupa c si p
    while (p != 0){
        cout << c / p << " ";
        c = c%p; // c%=p;1234 - 234
        p /= 10;

    }
    return 0;
}
