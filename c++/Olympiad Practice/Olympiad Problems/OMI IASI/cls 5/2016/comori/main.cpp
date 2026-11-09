#include <fstream>
using namespace std;

ifstream fin("comori.in");
ofstream fout("comori.out");

int main(){
    int n, i, x, last = 0, ok = 1;
    fin >> n;
    for (i = 1; i<=n; i++){
        fin >> x;
        if (x < last){
            fout << i << " ";
            ok = 0;
        }
        last = x;
    }
    if (ok == 1){
        fout << "0";
    }
}
