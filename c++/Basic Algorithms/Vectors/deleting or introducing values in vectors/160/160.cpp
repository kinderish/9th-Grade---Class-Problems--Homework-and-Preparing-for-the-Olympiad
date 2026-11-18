#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int v[55], n, i, j;
    bool ok = false;
    cin >> n;
    for (i = 1; i<= n; i++){
        cin >> v[i];
    }
    for (i = 1; i<=n; i++){
        if (sqrt(v[i]) == int(sqrt(v[i]))&& ok == false){
            for (j =n; j>=i; j--){
                v[j+1]=v[j];
            }
            v[i] = sqrt(v[i]);
            n++;
            ok = true;
        }else{
            ok = false; 
        }
    }
    for (i = 1; i<=n; i++){
        cout<<v[i]<< " ";
    }
    return 0;
}