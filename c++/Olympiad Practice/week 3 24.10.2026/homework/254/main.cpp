#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, n, a, b, nr;
    cin >> n;
    for (i = 1; i <= n; i++){
        cin >> a >> b;
        nr = 1;
        if (a< b){
            while (nr <= b){
                nr = nr * 2;
            }
            nr /=2;
            if (nr >= a){
                cout << nr<< endl;
            }else{
                cout << "0"<< endl;
            }
        } else {
            while (nr <= a){
                nr = nr * 2;
            }
            nr /=2;
            if (nr >= b){
                cout << nr << endl;
            }else{
                cout << "0"<< endl;
            }
        }

    }

}
