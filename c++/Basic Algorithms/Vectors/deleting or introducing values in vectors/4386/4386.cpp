#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int v[2002], n, i,j, minn;
    bool ok = false;
    minn = pow(2, 30);
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
        if (v[i]<minn){
            minn = v[i];
        }
    }
    for (i = 1; i<=n; i++){
        if (v[i] == minn && ok == false){
            for (j = n; j>i; j--){
                v[j+1]=v[j];
            }
            v[i+1]= v[i];
            n++;
            ok = true;
        } else {
            ok = false;
        }
    }
    for (i = 1; i<=n; i++){
        cout << v[i]<< " ";
    }
}