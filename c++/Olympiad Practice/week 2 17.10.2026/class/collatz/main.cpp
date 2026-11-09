#include <iostream>
#include <fstream>
using namespace std;

fstream fin("p4.in");
ofstream fout("p4.out");

int sume[10000000];

int nrPasi(long long n){
    int c = 0;
    while (n > 1){
        if (n %2 == 0)
            n /= 2;
        else
            n = n * 2 + 2;
        c++;
    }
    return c; // pentru a determina nr de pasi din suma cred??
}
void populeazaVectorSumePartiale(int k, int nrPasi){
    sume[k] = sume[k-1] + nrPasi;
}
int main(){
    for (int i = 1; i <= MAX; i++){
        populeazaVectorSumePartiale(i, nrPasi(i));
    }
    int T;
    long long x, y;
    fin >> T;
    for(int i = 1; i <= T; i++){
        fin >>x >>y;
        long long suma = 0;
        int grupuri = 1;
        while (x <= y){
            if (x % 2 == 0){
                suma += grupuri*nrPasi(x);
                x++;
            }
            if (y%2 ==1){
                suma += grupuri *nrPasi(y);
                y--;
            }
        }
        long long jum = y - x +1;
        suma += 4 * jum;
        grupuri *= 2;
        x = (x + 1)/2;
        y = y/2;
    }
    fin.close();
    fout.close();

    return 0;

}
