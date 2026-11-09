#include <iostream>


using namespace std;


int main()
{
    long long int n, nr = 0, p=1,copie;
    cin >> n;
    copie = n;
    while (n){
        int uc = n % 10;
        if(uc % 2 == 0){
            nr = p*uc +nr;
            p *= 10;
        }
        n /= 10;
    }

    if(p==1&&nr==0&&copie!=0){
        cout << "-1";
    }else{
        if(copie!=0){
            cout << nr;
        }
    }


    }

