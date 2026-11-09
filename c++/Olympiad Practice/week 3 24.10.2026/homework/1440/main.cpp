#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("nr.in");
ofstream fout("nr.out");

int numarulDeTermeni(int n){
    int i, p = 1;
    for (i = 1; i < n; i++){
        p  *= 2;
    }
    return p;
}
int grupa(int n){
    int i, s = 0;
    if (n == 1){
        i = 1;
    }else{
        for (i = 1; s < n; i++){
            s = s + numarulDeTermeni(i);
        }
    }
    return i;
}
int pozitie(int n){
    int i, s = 0, p = 1, poz;
    if (n == 1){
        poz = 1;
    } else {
        for (i = 1; s < n; i++){
            s = s + numarulDeTermeni(i);
        }
        p = numarulDeTermeni(grupa(n))/2;
        s = s - p;
        poz = abs(n - s);
    }

    return poz;
}

int main(){
     int h,k, j, n, nr,p = 1, urmCif, nrT;
     fin >> k;
     fin >> n;
     int gr = grupa(n);
     if (gr != 1){
        gr = gr - 1;
     }
     int poz = pozitie(n);
     fout << poz<< " ";
     for (h = 1; h< gr;h++){
        p = p * 10;
     }
     fout << numarulDeTermeni(k);
     int copiePoz = poz;
     nr = gr * p;
     p /= 10;
     nrT= numarulDeTermeni(gr); // gr 5=> 16 t
     for (j = 1; j <= gr; j++){
        nrT/=2;// 8;4
        if (poz > nrT){// 4 > 8 => urmcif = 0; 2 > 4 => urm cif = 3; 3 > 2 => gr = 2
            urmCif = gr - 1;
        }else if (poz < nrT){
                if (poz == nrT){
                    urmCif = gr - 1;
                }else if (poz > nrT / 2){
                    urmCif = gr - 1;
                    }else if (poz == nrT/2){
                        urmCif = 0;
                    }else {
                        urmCif = 0;
                    }
        }

        nr = nr + urmCif * p; //5400; 54300
        p = p / 10;
        gr = gr - 1;
        poz = poz/2;
     }
     if (gr % 2 == 1){
        if (poz % 4 == 0){
        nr = nr + 21;
     }else if(poz % 4 == 1){
        nr = nr;
     }else if (poz % 4 == 2){
        nr = nr + 1;
     }else{
        nr = nr + 20;
     }
     }else {
        if (poz % 2 == 0){
            nr = nr + 1;
        }
     }

     fout << nr;

}
