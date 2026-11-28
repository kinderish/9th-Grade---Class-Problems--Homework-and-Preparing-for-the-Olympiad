#include <fstream>
using namespace std;

ifstream fin("cufar.in");
ofstream fout("cufar.out");

int D[1000000];

int Prime(int n, int k){
    int d, p, ans;
    int i = 1, cont;
    for (d= 1; d<=n/2; d++){
        if (n % d == 0){
            D[i] = d;
            i++;
        }
    }
    cont = 0;
    for (int j = 1; j<=i && cont <= k; j++){
        p = D[j];
        bool prim = true;
        if (p<2){
            prim  = false;
        } else {
            for (int z = 2; z*z<=p; z++){
                if (p%z==0){
                    prim = false;
                    break;
                }
           }
        }
        if (prim == true){
            ans = p;
            cont++;
        }
    }
    return ans;
}

int main(){
    int C, n, i, cartonas, k, s = 0;
    fin >> C >> n;
    if (C == 1){
        fin >> cartonas >> k;
        fout << Prime(cartonas, k);
    }else{
        for (i = 1; i<=n; i++){
            fin >> cartonas >> k;
            s = s+Prime(cartonas, k);
        }
        fout << s;
    }
}