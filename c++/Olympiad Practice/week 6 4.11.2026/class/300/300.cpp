#include <fstream>
using namespace std;

ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");
int vec[101], S[101];
int main(){
    int s, n, ok = 0, p, u;
    fin >> n >> s;
    S[1] = 0;
    for (int i = 1; i<=n; i++){
        fin >> vec[i];
        S[i] = S[i-1]+vec[i];

    }
    for (int i = 1; i<=n && ok ==0; i++){
        for (int j = i; j<=n&& ok ==0; j++){
            int suma;
            if (i == 1){
                suma = S[j];
            } else {
                suma = S[j]- S[i-1];
            }
            if (suma == s){
                p = i;
                u = j;
                ok = 1;
            }
        }
    }
    if (ok == 0){
        fout << "0 0";
    } else {
        fout << vec[p]<< " "<< vec[u]; 
    }

}
