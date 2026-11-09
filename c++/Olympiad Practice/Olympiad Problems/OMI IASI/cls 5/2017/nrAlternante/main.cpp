#include <fstream>
using namespace std;
ifstream fin("joc.in");
ofstream fout("joc.out");

int putere(long long x){
    int p = 1;
    while (x > 9){
        p *= 10;
        x = x / 10;
    }
    return p;
}
int numarulDeCifre(long long x){
    int c = 0;
    while (x > 0){
        c++;
        x /= 10;
    }
    return c;
}

int main(){
    int n, i, put, pc, c, uc, ok, cont = 0;
    long long int x;
    fin >> n;
    for (i = 1; i <= n; i++){
        fin >> x;
        put = putere(x);
        ok = 1;
        int nrCif = numarulDeCifre(x);
        if (nrCif % 2 == 1){
                while (x > 99) {
                uc = x % 10;
                c = x % 100 / 10;
                pc = x % 1000 / 100;
                if (((c < uc && c < pc) || (c > uc && c > pc)) && ok == 1){
                    ok = 1;
                } else {
                    ok = 0;
                }
                x = x / 10;
            }
        }
        if (ok == 1 && nrCif %2 == 1){
            cont++;
        }
    }
    fout << cont;
    fin.close();
    fout.close();
}

