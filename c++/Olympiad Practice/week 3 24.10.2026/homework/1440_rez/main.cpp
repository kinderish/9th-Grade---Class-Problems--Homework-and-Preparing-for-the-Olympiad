#include <fstream>
#include <cmath>
using namespace std;

fstream fin("nr.in");
ofstream fout("nr.out");
int elementDePePozitiaX(int n){
    int st = 1, termen = 1;
    while (n >= st){
        st *= 2;
        termen++;
    }
    termen--;
    st /= 2;
    int dif = n - st;
    int rez = termen * pow(10, termen - 1);
    int p = 1;
    if (dif != 0){
        for (int i = 1; i <= termen; i++){
            if (dif % 2 == 1){
                rez = rez + i * p;
            }
        p *= 10;
        dif /= 2;
        }
    }
    return rez;
}

int main(){
    int  k, n, x;
    fin >>k;
    fout << pow(2, k - 1)<< endl;

    fin >> n;
    fout<< elementDePePozitiaX(n)<< endl;
    fin >> x;
    int poz = 2;
    while (elementDePePozitiaX(poz) <= x){
        poz++;
    }
    fout<< elementDePePozitiaX(poz)<< endl;
    fin.close();
    fout.close();
    return 0;
}
