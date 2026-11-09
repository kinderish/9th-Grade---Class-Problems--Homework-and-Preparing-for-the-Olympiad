#include <iostream>

using namespace std;

int main()
{
    int i, n, p = 1;
    cin >> n;
    for (i = 1; i<=n;i++){
        p=p*(i+i+1);
    }
    cout << p;
}
