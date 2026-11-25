#include <iostream>
using namespace std;

int main(){
    long long int N, i, p = 1, p1, copie1, copie2,copie3, P, C = 1, ms = 0,md, maxx, ok, copiep;
    cin >> N;
    copie1 = N;
    copie2 = N;
    while (N > 9){
        p = p * 10;
        N = N / 10;
    }

    if(copie1==p){
        while (copie1>0){
        i = copie1;
        while (i>0){
            i = i / 10;
            C = C + 1;
        }
        copie1 -= 1;
    }
    cout << "0"<<" "<<C;
    }else{

        copie1 = copie1%p/10;
        p1 = 1;
        ok = 0;
        while (copie1 > 9){
                p1 = p1*10;
                copie1 = copie1/10;
            }
        p1 = p1*10;
        copiep = p1;

        while (p1>0){
            if(copiep>=10){
                ms = N/(copiep * 10);
                md = N % copiep;
                P = md*ms;
                if (ok == 0){
                    maxx = P;
                }else if(P > maxx){
                    maxx = P;
                    }

            copiep= copiep / 10;
            }
        p1 = p1/10;
        ok = 1;
     }

    while (copie2>0){
        i = copie2;
        while (i>0){
            i = i / 10;
            C = C + 1;
        }
        copie2 -= 1;
    }
    cout << maxx<<" "<<C;

}
}
