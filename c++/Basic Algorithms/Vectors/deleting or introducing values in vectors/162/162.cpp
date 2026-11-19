#include <iostream>
using namespace std;

int main(){
    int v[17], n, i;
    cin >>n;
    for (i =1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << v[j]<< " ";
        }
        v[n+1] = v[1];
        for (int j = 1; j<=n; j++){
            v[j] = v[j+1];
        }
        cout << endl;
    }
}