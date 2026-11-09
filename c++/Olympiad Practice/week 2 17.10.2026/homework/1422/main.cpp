#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("ograda.in");
ofstream fout("ograda.out");

 int main(){
    long long int C, P, x, d, nrG, nrV, contp = 0, conti = 0;
    fin >> x;
    fin >> C >> P;
    if (x == 1){
        nrV = (P - 2 * C) /2;
        nrG = C - nrV;
        fout << nrG << " " << nrV;
    }else if (x == 2){
       for(d = 1; d <= C; d++){
            if (C % d == 0 && d % 2 == 1 ){
                conti = conti +1;
            }
       }
        for(d = 1; d <= P; d++){
            if (P % d == 0 && d % 2 == 0 ){
                contp = contp +1;
            }
       }
        fout << conti << " " << contp;
    }
    fin.close();
    fout.close();

 }
