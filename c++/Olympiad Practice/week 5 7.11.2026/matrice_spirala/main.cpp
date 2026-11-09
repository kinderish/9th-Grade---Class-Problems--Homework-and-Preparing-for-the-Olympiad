#include <fstream>
using namespace std;
ifstream fin("spirala.in");
ofstream fout("spirala.out");

int main(){
 int n, mat[30][30], i, j;
 fin >>n;
 for (i = 1; i<=n; i++){
    for(j = 1; j<=n; j++)
        fin >> mat[i][j];
 }
 for (int c = 1; c <=n; c++){
    for (j = c; j <= n-c+1; j++)
        fout << mat[c][j]<<" ";
    for (i = c+1; i<= n-c+1; i++)
        fout << mat[i][n-c+1]<< " ";
    for (j = n-c; j>=c; j--){
        fout << mat[n-c+1][j]<< " ";

    }
 }
}
