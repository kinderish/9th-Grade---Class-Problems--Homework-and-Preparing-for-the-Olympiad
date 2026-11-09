#include <iostream>
using namespace std;

int main(){
    int n, i, p = 1, s = 0;
    cin >> n;
    for (i=1;i*p<=n*p;i++){
        p=p*i;
        s=s+p;
    }
    cout << s;

}
