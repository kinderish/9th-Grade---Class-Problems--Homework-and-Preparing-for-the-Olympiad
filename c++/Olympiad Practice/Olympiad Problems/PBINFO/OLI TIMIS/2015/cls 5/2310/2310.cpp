#include <fstream>
using namespace std;

ifstream fin("saci.in");
ofstream fout("saci.out");

int main(){
    int n, i, uc, penc, cont = 0,x;
    bool ok = true;
    fin >> n;
    for (i = 1; i<=n; i++){
        fin >> x;
        uc = 10;
        ok = true;
        while (x>0 && ok == true){
            penc = x%10;
            if (penc < uc){
                ok = true;
            } else {
                ok = false;
            }
            uc = x%10;
            x = x/10;
        }
        if (ok == true){
            cont++;
        }
    }   
    fout<< cont;
    fin.close();
    fout.close();
}