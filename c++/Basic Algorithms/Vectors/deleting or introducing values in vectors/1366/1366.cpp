#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int v[201] = {0}, n, i, j, z;
    bool ok;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = n; i>=1; i--){
        j = 1;
        ok = false;
        while (j<=i){
            if (ok == false && abs(v[j])%2==abs(v[j+1])%2 && j+1<=n && v[j]!=v[j+1]){
                for (int h = n; h>j; h--){
                    v[h+1]=v[h];
                }
                v[j+1] = (v[j+1]+v[j])/2;
                ok = true;
                n++;
                j++;
            } else {
                j++;
            }
        }
        for (z = 1; z<=n; z++){
            cout << v[z]<< " ";
        }
        cout << endl;
    }
    
}
