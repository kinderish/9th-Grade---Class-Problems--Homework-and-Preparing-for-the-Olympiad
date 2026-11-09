#include <iostream>

using namespace std;

int main()
{
    long long int n,uc,og;
    cin >> n;
    og=0;
    while (n!=0){
        uc=n%10;
        og=og*10+uc;
        n=n/10;
    }
    cout << og;
}
