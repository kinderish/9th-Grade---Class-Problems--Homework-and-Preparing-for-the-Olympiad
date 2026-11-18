#include <iostream>
using namespace std;

int main(){
    int v[27], n, i, x, p;
    cin >> n >> x>> p;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = n; i>=p; i--){
        v[i+1] = v[i];
    }
    v[p] = x;
    for (i = 1; i<=n+1; i++){
        cout << v[i]<< " ";
    }
}