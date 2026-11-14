#include <iostream>
using namespace std;

/*int va[100001] = {0}, vb[100001] = {0}, vc[100001] = {0}, vcomun[100001] = {0}; 

int main(){
    int i, n, a, b, c, minn = 0, e = 1;
    bool ok =false;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> a>>b>>c;
        va[i] = a;
        vb[i]= b;
        vc[i]= c;
    }
    i = 1;
    while (i <= n+1){
        for (int j = 1; j<=n; j++){
            for (int z = 1; z <= n; z++){
                if (va[i] == vb[j] && vb[j] == vc[z]){
                    vcomun[e] = va[i];
                    ok = true;
                    e++;
            }
            }
        }
        i++;
    }
    minn = vcomun[1];
    while(vcomun[e]){
        if (vcomun[e]<minn){
            minn = vcomun[e];
        }
        e--;
    }
    if (ok == false){
        cout << "-1";
    } else {
        cout << minn;
    }
} */

int va[100001], vb[100001], vc[100001];

int main() {
    int n;
    cin >> n;

    
    for (int i = 1; i <= n; i++) cin >> va[i];
    for (int i = 1; i <= n; i++) cin >> vb[i];
    for (int i = 1; i <= n; i++) cin >> vc[i];

   int i = 1, j = 1, k = 1;
    while (i <= n && j <= n && k <= n) {
        if (va[i] == vb[j] && vb[j] == vc[k]) {
            cout << va[i]; 
            return 0;      
        }
        
        // Avansam indicele elementului cel mai mic
        if (va[i] <= vb[j] && va[i] <= vc[k]) {
            i++;
        } else if (vb[j] <= va[i] && vb[j] <= vc[k]) {
            j++;
        } else {
            k++;
        }
    }
    cout << -1;
    return 0;
}
