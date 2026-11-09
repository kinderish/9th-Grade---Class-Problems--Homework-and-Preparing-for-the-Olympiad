#include <fstream>
using namespace std;

ifstream fin("nerf.in");
ofstream fout("nerf.out");

long long sumaX(int a, int b){
    long long int i, p = a;
    for (i =1; i<b; i++){
        p *= a;
    }
    return p;
}
int main(){
    long long int i, n, a, b, x = 0, cif, s = 0, cont = 0;
    fin >> n;
    for (i = 1; i <= n; i++){
        fin >> a >> b;
        x += sumaX(a,b);
    }
    fout << x << endl;
    long long int copiex = x;
    while (x > 0){
        cif = x % 10;
        s = s + cif;
        x /= 10;
    }
    fout << s<< endl;
    while (copiex > 0){
        cif = copiex % 10;
        if (cif != 0){
            cont += 1;
        }
        copiex /= 10;
    }
    fout << cont;
}
