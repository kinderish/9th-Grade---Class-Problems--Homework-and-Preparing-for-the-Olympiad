#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("invers.in");
ofstream fout("invers.out");

int main(){
    int n, i, x;
    fin >> n;
    int vec[1001];
    for (i = 1; i <= n; i++){
        fin >> vec[i];
    }
    for (i = n; i >= 1; i--){
        fout << vec[i] << " ";
    }
    fin.close();
    fout.close();
    return 0;
}
