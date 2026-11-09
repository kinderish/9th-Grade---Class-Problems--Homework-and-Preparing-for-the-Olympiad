#include <iostream>
using namespace std;

int main(){
    int n, m, i;
    cin >> n >> m;
    for (i = n; i>=1; i--){
        cout << m * i << " ";
    }
}
