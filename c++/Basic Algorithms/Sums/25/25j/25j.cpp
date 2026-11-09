#include <iostream>

using namespace std;

int main()
{
    int i, n, p = 1;
    cin >> n;
    for (i=1; i <= n; i += 2) {
        p = p * i;
    }
    cout << p;

}
