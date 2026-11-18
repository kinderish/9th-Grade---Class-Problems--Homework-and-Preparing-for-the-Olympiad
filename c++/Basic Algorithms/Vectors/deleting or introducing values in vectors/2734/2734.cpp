#include <iostream>
using namespace std;

int main(){
    int v[1001], n, i,j;
    cin >> n;
    
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n; i++){
        j= i+1;
        while (j <= n){
            if (v[i] == v[j]){
                for (int h = j; h <n; h++){
                    v[h] = v[h+1];
                }
                n--;
            }else {
                j++;
            }
        }
    }
    for (i = 1; i<=n; i++){
        cout << v[i]<<" ";
    }
    return 0;
}