#include <iostream>
using namespace std;
//deleting all even values from vector

int main(){
    int v[1000]={0}, n,i,j;
    cin >> n;
    for (i = 0; i<=n-1; i++){
        cin >> v[i];
    }
    for (i = n-1; i>=0; i--){
        if (v[i]%2 == 0){
            for (j = i; j<=n-1; j++){
                v[j] = v[j+1];
            }
            n--;
        }
    }
    for (i = 0; i<=n-1; i++){
        cout << v[i] << " ";
    }
}