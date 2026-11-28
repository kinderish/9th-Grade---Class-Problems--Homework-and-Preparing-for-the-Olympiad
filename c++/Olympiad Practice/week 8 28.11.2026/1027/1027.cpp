#include <fstream>
using namespace std;

ifstream fin("cool.in");
ofstream fout("cool.out");

int f[1001], v[5001];

int main(){
    int i, n, k, minn = 1000, maxx = 0, cont = 0;
    int p;
    bool cool = true;
    fin >> p;
    fin >> n >> k;
    if (p == 1){
        for (i =1; i<=n; i++){
            fin >> v[i];
            f[v[i]]++;
            if (v[i]> maxx && i<=k){
                maxx = v[i];
            }
            if (v[i]<minn && i<=k){
                minn = v[i];
            }
        }
        for (i = minn; i<=maxx; i++){
            if (f[i] != 1 && cool == true){
                cool = false;
            }else{
                cont++;
            }
        }
        if (cool){
            fout << maxx;
        }else{
            fout << cont;
        }
    } else {
        for (int z = 1; z<=n; z++){
            int copien = n;
            while (copien > 1){
                for (i = z; i<=copien; i++){
                    if (f[i] != 1){
                        cool = false;
                    }else{
                        cont++;
                    }
                }
                if (cool == true){
                    
                }
            }
        }
    }
}