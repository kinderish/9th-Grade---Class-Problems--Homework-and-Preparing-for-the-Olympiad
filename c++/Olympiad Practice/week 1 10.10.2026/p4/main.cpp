#include <iostream>

using namespace std;

int main()
{
    long long int n,uc,ucc,og;
    cin >> n;
    og=0;
    while (n!=0){
        uc=n%10;
        n=n /10;
        og = og*10+uc;
        ucc=og%10;

        cout << ucc << " ";
    }

}
