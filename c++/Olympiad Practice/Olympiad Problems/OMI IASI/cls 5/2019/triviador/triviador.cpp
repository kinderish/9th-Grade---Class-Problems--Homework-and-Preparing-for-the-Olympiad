#include <fstream>
using namespace std;

ifstream fin("triviador.in");
ofstream fout("triviador.out");

int main(){
    int n, i, a, b, c, vec[10001] = {0}, s;
    fin >> n;
    int max1 = 0, max2 = 0, ok = 0;
    for(i = 1; i<=n; i++){
        fin >> a>>b>>c;
        s = a + b +c;
        vec[i] = s;
    }
    
    if (max1 == 2){
        fout << "TOTI SUNT CASTIGATORI";
    } else {
        fout << max1 << " " << max2;
    }
    fin.close();
    fout.close();
    return 0;
}