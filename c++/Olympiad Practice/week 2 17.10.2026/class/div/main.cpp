#include <iostream>

using namespace std;

int main()
{
    int n;
    for (long long d = 1; d * d <= n; d++)
    if (n % d == 0) {
        // d este divizor
        if (d != n / d) { /* si n / d este divizor */ }
    }
}
