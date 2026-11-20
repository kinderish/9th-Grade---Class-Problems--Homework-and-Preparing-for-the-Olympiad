#include <fstream>
using namespace std;

ifstream fin("secvk.in");
ofstream fout("secvk.out");

int v[100001], s[1000000];

int main(){
    int n, k, i, maxx = 0;
    bool found = false;
    fin >> n >> k;
    for (i = 1; i<=n; i++);
        fin >> v[i];
    s[0] = 0;
    for (i = 1; i<=n; i++)
        s[i] = s[i-1]+v[i];
    for (i = 1; k<=n && found == false; i++){
        if (s[k]- s[i-1]>maxx){
            maxx = s[k]-s[i-1];
        }
        k++;
    }
    for (i; i<=k; i++){
        fout << v[i] << " ";
    }
}