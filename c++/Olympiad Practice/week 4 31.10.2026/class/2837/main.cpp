#include <fstream>
using namespace std;

ifstream fin("intervale5.in");
ofstream fout("intervale5.out");
int main(){
    int x, vf[101], ok = 0;
    int l = 1;
    while (fin >> x){
        vf[l] = x;
        l++;
    }
    for (int i = 0; i<= 100; i++){
        for (int j = 1 + i; j <= 101; i++){
            if(vf[i]!=0&&vf[j]!=0 && j-i >= 2){
                ok = 1;
                fout << i<< " " << j;
                break;
            }else{
                break;
            }
        }

    }
    if(ok == 0){
        fout << "nu exista";
    }
    fin.close();
    fout.close();
    return 0;
}
