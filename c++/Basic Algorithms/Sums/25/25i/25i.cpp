#include <iostream>

using namespace std;

int main()
{
    long long int p = 1, n, i;
    cin >> n;
    for (i = 2; i <= n; i = i + 2){
        p *= i;
    }
    cout << p;
}
