#include <fstream>
using namespace std;

ifstream fin("cool.in");
ofstream fout("cool.out");

int a[5001] = {0}, panaLaK[5001]={0};

int main(){
    int n, p, i, k, deComp;
    fin >> p;
    for (i = 1; i<=n; i++)
        fin >> a[i];
        
    if (p == 1){
        fin >> n >> k;
        for (i = 1; i<=k; i++){
            panaLaK[i] = a[i];
        }
    
    } else {

    }
}