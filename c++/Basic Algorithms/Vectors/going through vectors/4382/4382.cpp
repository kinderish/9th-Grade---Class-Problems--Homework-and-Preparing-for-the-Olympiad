#include <iostream>
using namespace std;

bool Prime(int n){
    bool prime = true;
    if (n<2){
        prime = true;
    }else {
        for (int d = 2; d*d<=n; d++){
            if (n % d == 0){
                prime = false;
                break;
            }
        }
    }
    return prime;
}

int main(){
    int n, v[1001], d, i;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n; i++){
        if (Prime(v[i])==true){
            v[i] = 0;
        }
        cout << v[i] << " ";
    }
    return 0;
}