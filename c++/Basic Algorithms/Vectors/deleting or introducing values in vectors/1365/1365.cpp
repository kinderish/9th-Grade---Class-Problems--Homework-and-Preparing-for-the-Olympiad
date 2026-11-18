#include <iostream>
#include <cmath>
using namespace std;

 int main(){
    int n, i, j;
    int v[202];
    bool ok = false;
    cin >> n;
    for (i  = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n; i++){
        if (abs(v[i]) % 2 == abs(v[i+1]) % 2 && ok == false && i+1<=n){
            for (j = n; j>i;j--){
                v[j+1] = v[j];
            }
            n++;
            v[i+1]=(v[i]+v[i+1])/2;
            ok = true;
        }else {
            ok = false;
        }
    }
    for (i = 1; i<=n; i++){
        cout << v[i]<<" ";
    }
 }