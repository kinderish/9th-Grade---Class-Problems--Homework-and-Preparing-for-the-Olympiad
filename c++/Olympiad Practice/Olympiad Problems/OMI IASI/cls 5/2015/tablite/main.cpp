#include <fstream>
using namespace std;

ifstream fin("tablite.in");
ofstream fout("tablite.out");

int main(){
    int n, cont = 1, s = 0;
    fin >> n;
    while (s + cont < n){
        s = s + cont;
        cont++;
    }
    fout << cont;
}
