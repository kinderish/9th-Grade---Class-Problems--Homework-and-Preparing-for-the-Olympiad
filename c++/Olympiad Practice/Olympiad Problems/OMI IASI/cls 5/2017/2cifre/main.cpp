#include <fstream>
using namespace std;

ifstream fin("2cifre.in");
ofstream fout("2cifre.out");

int main(){
    int cerinta, minn = 99, maxx = 10, contMin, contMax, x, n, i, nr;
    fin >> n;
    fin >> cerinta;
    if (cerinta == 1){
        for (i = 1; i <= n; i++){
            fin >> x;
            while (x > 0){
                nr = x % 100;
                if (nr > 9){
                    if (nr < minn){
                        minn = nr;
                        contMin = 0;
                    }
                    if (nr == minn){
                        contMin++;
                    }
                    if (nr > maxx){
                        maxx = nr;
                        contMax = 0;
                    }
                    if (nr == maxx){
                        contMax++;
                    }
                }
                x = x / 10;
            }

        }
        fout << minn << " " << contMin<<endl;
        fout << maxx << " " << contMax;
    } else {
        int deComp, cont = 0;
        fin >> deComp;
        for (i = 1; i <= n; i++){
            fin >> x;
            while (x > 0){
                nr = x % 100;
                if (nr == deComp){
                    cont++;
                }
                x /= 10;
            }
        }
        fout << cont;
    }

}
