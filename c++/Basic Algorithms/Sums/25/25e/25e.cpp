#include <iostream>
using namespace std;

int main() {
     long long int p = 0, s = 0, n, i;
     cin >> n;
     for (i = 1; i <= n; i++){
        p = i * (i + 1);
        s = s + p;
     }
     cout << s;
}
