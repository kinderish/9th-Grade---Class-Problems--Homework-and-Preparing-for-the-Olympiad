#include <iostream>
using namespace std;

// verifying if a value is prime, then eliminating it

int prime(int n){
    int d;
    bool prime = true;
    if (n<2){
        prime = false;
    } else {
        for (d = 2; d*d<=n; d++){
            if (n%d==0){
                prime = false;
                break;
            }
        }
    }
    return prime;
}
int main(){
    int v[1001] = {0}, n,i;
    bool prim;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = n; i>=1; i--){
        prim = prime(v[i]);
        if (prim==true){
            for (int j = i; j<=n; j++){
                v[j] = v[j+1];
            }
            n--;
        }
        
    }
    for (i = 1; i<=n; i++){
        cout << v[i]<< " ";
    }

}