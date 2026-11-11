#include <fstream>
using namespace std;

ifstream fin("balmascat.in");
ofstream fout("balmascat.out");

long long putere(long long n){
    long long i, p = 1;
    for (i = 1; i<= n;i++){
        p *= 10;
    }
    return p;
}

int main(){
    int n, i, nrCutiiFaraIncaltaminte, p, pc, dc;
    long long int cod = 0, put;
    fin >> n >> p;
    nrCutiiFaraIncaltaminte = 0;
    long long copiep = p;
    while (copiep <= n){
        nrCutiiFaraIncaltaminte++;
        copiep += p;
    }  
    copiep-= p;
    if (copiep != n){
        nrCutiiFaraIncaltaminte++;
    }
    // fout << nrCutiiFaraIncaltaminte<< endl;
    int c = nrCutiiFaraIncaltaminte %10;
    dc = c;
    if (c != 9){
        pc = c + 1;
    } else {
        pc = c-1;
    }
    int nrC = 0;
    bool ok = false;
    p = 2 * p;
    put = putere(p) / 10;
    while (nrC != p){
        if(ok == false){
            cod = cod + pc*put;
            ok = true;
        } else {
            cod = cod + dc*put;
            ok = false;
        }
        put /= 10;
        nrC++;
    } 
    cod = cod / 10;
    fout << cod;
    fin.close();
    fout.close();
    return 0;
}