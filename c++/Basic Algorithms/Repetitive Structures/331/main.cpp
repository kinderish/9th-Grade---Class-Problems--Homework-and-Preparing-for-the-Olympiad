
#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (i = 2*n; i >= 1; i--){
        if(i % 2 == 1){
            cout << i << " ";
        }
    }

}
