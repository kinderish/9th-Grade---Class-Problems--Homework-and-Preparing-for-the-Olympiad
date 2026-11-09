#include <iostream>

using namespace std;

int main()
{
    int n, ok;
    long long d;
    cin >> n;
    ok = 0;
    for (d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            cout << d << " ";
            ok = 1;
        }
    }
     for (d = n / d; d >= 2; d--)
    {
        if (n % d == 0)
        {
            cout << n / d << " ";
            ok = 1;
        }
    }
    if (ok == 0){
        cout << "0";
    }
    return 0;
}
