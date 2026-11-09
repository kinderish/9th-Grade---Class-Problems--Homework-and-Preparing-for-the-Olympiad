#include <iostream>
using namespace std;
int main(){
    int s = 0, n, i;
    cin >> n;
    for (i = 1; i<= n; i++ ){
        if (i % 2 == 0){
            s = s - (i * i);
        } else {
            s = s + (i * i);
        }
    }
    cout << s;

}
