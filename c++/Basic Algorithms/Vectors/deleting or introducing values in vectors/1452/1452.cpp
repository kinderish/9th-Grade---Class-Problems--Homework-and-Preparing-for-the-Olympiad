#include <iostream>
using namespace std;
// deleting with a for loop the value on position p of vector v
int main(){
    int v[1501]={0}, n, p;
    cin >> n>> p;
    for (int i =1; i<=n; i++){
        cin >> v[i];
    }
    for (int i = p; i<=n; i++){
        v[i] = v[i+1];
    }
    for (int i = 1; i<=n-1; i++){
        cout << v[i] << " ";
    }
}