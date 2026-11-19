#include <iostream>
#include <cmath>
using namespace std;
//introducing a new value in the vector when there are two numbers of the same parity (arithmetic average)
int v[10000];

int main(){
    int n, i, j, z, n1 = 0;
    bool ok;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n;i++){
        cout << v[i]<< " ";
    }
    cout << endl;
    
    for (i = 1; i<=n; i++){
        j = 1;
        ok = false;
        n1 = n;
        while (j<=n){
            if (j+1<=n && abs(v[j]%2) == abs(v[j+1]%2) && v[j] != v[j+1] && ok == false){
                for (int h = n; h>j; h--){
                    v[h+1]=v[h];
                }
                v[j+1] = (v[j+1] + v[j])/2;
                ok = true;
                n++;
                j++;
            } else {
                j++;
                ok = false;
            }
        }
        if (n1 == n){
            break;
        }
        for (z = 1; z<=n; z++){
            cout << v[z]<< " ";
        }
        cout << endl;
    }
    
}
