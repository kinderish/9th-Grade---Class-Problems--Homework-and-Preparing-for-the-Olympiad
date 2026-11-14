#include <iostream>
using namespace std;

int main(){
    int n, v[100], i;
    cin >> n;
    for (i = 0; i<= n; i++){
        cin >> v[i];
    }
    for (int i = 1; i<= n-1; i++){
        v[i] = v[i+1];    
    }
    n--;
    v[n-2] = v[n-1];
    n--;
    for (int i = 0; i<=n;i++){
        cout << v[i];
    }
    return 0;
}