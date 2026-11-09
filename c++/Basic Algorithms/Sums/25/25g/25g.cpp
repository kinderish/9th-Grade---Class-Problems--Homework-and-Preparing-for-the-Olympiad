#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0, p = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        p = i * (i + 1);
        if (i % 2 == 0){
            s = s - p;
        } else {
            s = s + p;
        }

    }
    cout << s;
}
