#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= 2*n; i++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

}
