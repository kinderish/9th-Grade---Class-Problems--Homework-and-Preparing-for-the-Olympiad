#include <iostream>

using namespace std;

int main()
{
    int n, i, s = 0;
    cin >> n;
    for (i=1; i <= (2*n-1); i = i + 2){
        s = s + i;
    }
    cout << s;
}
