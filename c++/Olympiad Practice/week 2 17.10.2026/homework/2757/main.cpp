#include <iostream>
using namespace std;
int main()
{
    int i, k, n, nr, rest, cif;
    cin >> n;
    for (i = 1; i <= n; i++){
        cin >> k;
        nr = (k / 3) + 99;
        rest = k % 3;
        if (rest == 0){
            cif = nr % 10;
        }else if (rest == 1){
            cif = (nr+1) /100;
        }else if (rest == 2) {
            cif = (nr + 1) /10 % 10;
        }else {
            cif = (nr+1) % 10;
        }
        cout << cif << " ";
    }
}
