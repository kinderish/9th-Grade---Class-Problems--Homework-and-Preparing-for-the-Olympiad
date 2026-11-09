#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nr.in");
ofstream fout("nr.out");
int main(){
    int v[100], i = 1;
    while (fin >> v[i]){
        i++;
    }
    i--;
    while (i >= 1){

        fout << v[i] << " ";
        i--;
    }
}
