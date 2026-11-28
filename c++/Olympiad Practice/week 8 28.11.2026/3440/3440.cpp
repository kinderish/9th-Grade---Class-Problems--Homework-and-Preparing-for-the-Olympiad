#include <fstream>
using namespace std;

ifstream fin("buldo.in");
ofstream fout("buldo.out");

int v[100001];
 
// cautare binara

int main(){
    int C, cont, i, n, maxx = 0;
    fin >> n;
    for (int i = 1; i<=n; i++){
        fin >> v[i];
        if (v[i]>maxx){
            maxx = v[i];
        }
    }
    int Hmax = 0;
    bool sePoateNivela = true;
    for (int H = 1; H<=maxx; H++){
        cont = 0;
        i = 1;
        sePoateNivela =  true;
        C = 0;
        while ((C >= v[i] || sePoateNivela == true) && i<=n){
            if (v[i]>=H){
                C = C+(v[i]-H);
            }else{
                C = C - (H-v[i]);
            }
            i++;
            sePoateNivela = false;
        }
        if (i == n){
            Hmax = H-1;
        }
    }
    
    fout << Hmax;
    fin.close();
    fout.close();
}