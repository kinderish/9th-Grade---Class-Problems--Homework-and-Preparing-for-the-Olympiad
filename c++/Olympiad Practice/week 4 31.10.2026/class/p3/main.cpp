#include <fstream>
using namespace std;

ifstream fin("vec.in");
ofstream fout("vec.out");

int main(){
    int vec[100] = {0}, i, maxi = -1, x, j;
    while(fin >> vec[i])
    {
        vec[x]++;
        if (x > maxi)
            maxi = x;
    }

    for (i = 1; i <= maxi; i++){
        for(j = 1; j<= vec[i]; j++)
            fout << i << " ";
    }


    fin.close();
    fout.close();
}
