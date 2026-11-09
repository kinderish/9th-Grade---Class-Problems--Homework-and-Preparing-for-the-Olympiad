#include <iostream>
using namespace std;

int main()
{
    long long int n, i, x, p = 1, uc, C, ok;

    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        p = p * x;
    }
    ok = 0;
    while (p > 0){
        uc = p % 10;
        if (uc != 0 && ok == 0){
            C = uc;
            ok = 1;
        }
        p = p /10;
    }
    cout << C;
}
