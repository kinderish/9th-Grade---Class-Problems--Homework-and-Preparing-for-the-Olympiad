#include <iostream>

using namespace std;

int main()
{
    int i, n, s = 0;
    cin >> n;
    for (i = 1; i <= n; i++){
        s = s + (i * i);
    }
    cout << s;
}
