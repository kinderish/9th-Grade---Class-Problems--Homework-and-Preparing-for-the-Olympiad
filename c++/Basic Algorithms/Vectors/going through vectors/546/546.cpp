#include <iostream>
using namespace std;
// going through vectors, cout the vakues that are a multiple of the last value in the vector

int main(){
    double vec[1001];
    int n, i;
    double deVerificat  =0;
    cin >> n;
    for (i = 1; i<=n; i++){
        cin >> vec[i];
    }
    double deComp = vec[n];
    for (i = 1; i<=n-1; i++){
        deVerificat  = vec[i]/deComp;
        if (int(deVerificat) == deVerificat){
            cout << vec[i]<< " ";
        }
    }
    cout << vec[n];
}

