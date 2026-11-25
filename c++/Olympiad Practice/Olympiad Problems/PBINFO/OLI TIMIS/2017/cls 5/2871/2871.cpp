#include <fstream>
using namespace std;

ifstream fin("fulger.in");
ofstream fout("fulger.out");

int main(){
    int n, i, j, x, copiex, deScazut, dif,cont = 0;
    fin >> n;
    for (i = 1; i<=n; i++){
        fin >> x;
        copiex = x;
        deScazut = 0;
        while (copiex>0){
            deScazut = deScazut*10+9;
            copiex = copiex/10;
        }
        dif = deScazut-x;
        fout << dif<< " ";
        if (dif%10 == 0 && dif %100 /10 == 1)
            cont++;
    }
    fout << endl<< cont;
}