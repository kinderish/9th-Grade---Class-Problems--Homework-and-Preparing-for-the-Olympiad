#include <iostream>
using namespace std;
// going through vectoris, cout the values after this pattern:
//first, last, second, penultimate and so on

int main(){
    int vec[1001] = {0}, n, i, contPrimele = 1, contUltimele;
    cin >> n;
    contUltimele = n;
    for (i = 1; i<=n; i++){
        cin >> vec[i];
    }
    for (i = 1;i<=n; i++){
        if (i % 2==1){
            cout << vec[contPrimele] << " ";
            contPrimele+=1;
        }else {
            cout << vec[contUltimele]<< " ";
            contUltimele-=1;
        }
    }
}