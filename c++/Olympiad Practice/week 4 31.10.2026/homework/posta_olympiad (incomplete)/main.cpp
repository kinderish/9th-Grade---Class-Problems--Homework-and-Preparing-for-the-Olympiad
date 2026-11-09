#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;

ifstream fin("posta.in");
ofstream fout("posta.out");

int main(){
    int vec[201] = {0}, n, i, vx[201] = {0}, copien, copiex, ok = 1, coefx = 0, cont = 0, vcont[201] = {0}, k, testareCasuta, g, maxx, ultimulTermen;
    double x, termGen;
    fin >> n;
    for(i = 1; i<= n; i++){
        fin >> vec[i];
    }
    copien = n;
    for (int j = 1; j <= n; j++){
        termGen = vec[copien]-vec[copien-1];
        if (termGen != 1){
            x = (termGen / n) / (n-1);
            x = round(x);
        } else {
            x = 1;
        }
        copien--;
        vx[j] = x;
    }
    ultimulTermen = vec[n];
    i = 1;
    while (ok != 0 && i <= n){
        cont = 0;
        coefx = 0;
        for (k = 1; k <= n; k++){
            testareCasuta = coefx * vx[i] + 1;
            if (vec[coefx+1] == testareCasuta){
                cont++;
            }
            coefx++;
        if (testareCasuta == ultimulTermen){
            ok = 0;
        }
        }
        vcont[i] = cont;
        i++;

    }
    maxx = 0;
    for (g = 1; g <= i; g++){
        if (vcont[g] > maxx){
            maxx = vcont[g];
        }
    }

    fout << maxx;

    fin.close();
    fout.close();
    return 0;

}
