#include <iostream>
using namespace std;

int main(){
    int n, v[1001], i;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> v[i];
    }
    for (i = 2; i<=n; i+=2){
        cout << v[i]<< " ";
    }
    cout << endl;
    if (n %2 ==1){
        for (i = n; i>=1; i-=2){
            cout << v[i]<< " ";
        }
    } else {
        for (i = n-1; i>=1; i -= 2){
            cout << v[i]<< " ";
        }
    }
    return 0;
}