#include <fstream>
using namespace std;

ifstream fin("centrale.in");
ofstream fout("centrale.out");

int main(){
    int cont  =0, n, x, i, copie, j, uc, ok = 0, comp;
    fin >> n;
    for (i = 1; i<= n; i++){
        int p = 1, nr = 0;
        fin >> x;
        copie = x;
        int copie2 = x;
        while (copie2> 0){
            nr = nr + 1;
            copie2 = copie2/10;
        }
        while (x > 9){
            p = p * 10;
            x = x / 10;
        }
        copie = (copie % p) / 10;
        x = copie;
        nr = nr - 2;
        uc = copie % 10;
        comp = uc;
        ok = 0;
        for (j = 1; j <= nr; j++){
            uc = copie % 10;
            if (uc != comp) {
                ok = 1;
            }
            copie = copie / 10;
        }
        if (ok == 0){
            cont = cont + 1;
        }

    }
    fout << cont;
    fin.close();
    fout.close();
}
