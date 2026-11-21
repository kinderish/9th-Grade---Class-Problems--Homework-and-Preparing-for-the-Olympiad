#include <iostream>
using namespace std;

int main(){
    int n, i, c, v[30];
    cin >> n;
    v[0] = 1;
    v[1] = 2;
    for (i = 2; i<n; ++i){
        v[i] = v[i-2]+v[i-1];
    }
    cout << v[n-1];
}
