#include <iostream>
#include <cassert>
using namespace std;

long long sumDiv(int n)
{
    long long s = 0;
    for (long long d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            s += d;
            if (d != n/d)
                s += n/d;
        }
    }
    return s;
}

int main()
{
    assert(sumDiv(6)==12);
    assert(sumDiv(11)==12);
    assert(sumDiv(10)==18);
    assert(sumDiv(17)==18);
    int a,b;
    cin >> a >> b;

    for (int x = a; x <= b; x++)
        for (int y = x+1; y <= b; y++)
            if (sumDiv(x) == sumDiv(y))
                cout << "(" << x << "," << y << ") ";

    return 0;
}
