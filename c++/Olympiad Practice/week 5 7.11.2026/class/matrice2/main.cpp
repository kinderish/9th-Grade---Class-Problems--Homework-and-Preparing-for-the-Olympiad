#include <iostream>
using namespace std;
int main(){
    int m[21][21],n,sp=0;ss=0;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>m[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i==j)
            sp=sp+m[i][j];
            else if(i+j==n+1)
                ss=ss+m[i][j];
    cout<<abs(sp-ss);
}
