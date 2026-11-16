#include <iostream>
using namespace std;
//the same algorithm as problem 1453, but with an extra for that determines the smallest value
// instead of if (v[i]%2==0), we have if (v[i] == min)
int main(){
    int v[1001] = {0}, n, i, j, minn = 2000000000;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
        if (v[i]<minn){
            minn = v[i];
        }
    }
    for (i = n; i>=1; i--){
        if (v[i] == minn){
            for (j =i; j<=n; j++){
                v[j] = v[j+1];
            }
            n--;
        }
    }
    for (i = 1; i<=n; i++){
        cout << v[i]<< " ";
    }
}