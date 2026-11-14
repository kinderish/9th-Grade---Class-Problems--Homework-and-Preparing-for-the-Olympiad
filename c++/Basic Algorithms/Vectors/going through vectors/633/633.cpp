#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int vec[1001] = {0}, n, contPare = 0, contImp = 0;
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> vec[i];
        if (vec[i]%2 == 0){
            contPare++;
        } else {
            contImp++;
        }
    }
    cout << abs(contPare - contImp);
}