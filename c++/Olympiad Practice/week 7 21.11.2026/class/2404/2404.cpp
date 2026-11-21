#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("test.in");
ofstream fout("test.out");

long long putere(long long a, long long n){
    long long p = 1;
    while (n){
        if (n%2==1)
            p = (p*a)%6669666;
        a= (a*a)%6669666;
        n/= 2;
    }
    return p;
}
int main(){
    long long n, s = 0;
    long long A[1001], B[1001];
    fin >> n;
    for (int i = 1; i<=n; i++){
        fin >> A[i];
    }
    for (int i = 1; i<=n; i++){
        fin >> B[i];
    }
    for (int i = 1; i<=n; i++){
        s = s+ (putere(A[i], B[i])%6669666);
    }
    fout << s;
}