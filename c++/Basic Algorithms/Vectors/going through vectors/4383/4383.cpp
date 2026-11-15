#include <iostream>
using namespace std;
//going through vectors, cout the last prime value
// made a function that determines if a value is prime or not
int divizori(int n){
    bool prim = false;
    if (n<2)
        prim = false;
    else {
        prim = true;
        for (int i =2; i*i<=n; i++){
            if (n%i == 0){
                prim = false;
                break;
            }
        }
    }
    return prim;
}
int main(){
    int vec[1001]= {0}, n, i;
    bool prim;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> vec[i];
    }
    for (i = n; i>=1; i--){
        prim = divizori(vec[i]);
        if (prim == true){
            vec[i] = 0;
            break;
        }   
    }
    for (i = 1; i<=n; i++){
        cout << vec[i]<< " ";
    }
}
