#include <fstream>
using namespace std;

ifstream fin("magie.in");
ofstream fout("magie.out");

int main(){
    int n,x, varsta, nrMagic = 0, maxx = 0;
    fin >> n;
    int cont = 0;
    for (int i = 1; i<=n; i++){
        fin >> x;
        varsta = 2017 - x;
        nrMagic = 0;
        if (varsta == 12){
            cont++;
        }
        while (x>0) {
            int uc = x % 10;
            x /=10;
            nrMagic = nrMagic + uc;
        }
        if (nrMagic>maxx){
            maxx = nrMagic;
        }
    }
    fout << cont << endl << maxx;
    fin.close();
    fout.close();
}