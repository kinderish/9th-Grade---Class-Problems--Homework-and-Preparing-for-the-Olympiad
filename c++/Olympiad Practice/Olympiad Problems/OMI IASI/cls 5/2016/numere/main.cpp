#include <fstream>
using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

int putere(long long n){
    int p = 1, c = 0, i;;
    while (n > 0){
        c = c+1;
        n = n/10;
    }
    for (i = 1; i <=c/2; i++){
        p = p*10;
    }
    return p;
}
int main(){
    int n, i, x, cif, s = 0;
    fin >> n;
    for (i = 1; i <=n; i++){
        fin >> x;
        int put = putere(x);
        cif = (x % (put * 10)) / put;
        if (cif % 2 == 1){
            s= s + cif;
        }
    }
    fout << s;

}
