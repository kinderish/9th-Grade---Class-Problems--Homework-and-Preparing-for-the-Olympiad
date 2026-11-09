#include <fstream>
using namespace std;

ifstream fin("vec.in");
ofstream fout("vec.out");

int main(){
    int vec[100], i, n, x,poz = 1;
    fin >> n;
    for (i = 1; i <= n; i++){
        fin >> vec[i];
    }
    fin >> x;

    for (i = 1; i <= n; i++){

        if (vec[i] <= x)
            poz++;
    }
    fout << poz-1;

    fin.close();
    fout.close();
}
