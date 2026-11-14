#include <fstream>
using namespace std;

ifstream fin("paritar.in");
ofstream fout ("paritar.out");


int main(){
    int n, i, maxPar = -1, x, maxImpar = -1;
    // int maxPar2 = -1, maxImpar = -1;
    fin >> n;
    for (i = 1; i <= n; i++){
        fin >> x;
        if (x %2 == 0 && x> maxPar){
            maxPar = x;
        } else if (x %2 == 1 && x > maxImpar){
            maxImpar = x;
        }
    }
    int ok = 1;
    for (i = n+1; i<= n*2; i++){
        fin >>x;
        // it works, oly for the first point
        /*if (x %2 == 0&& x>maxPar2){
            maxPar2 = x;
        }
        if (x%2 == 1 && x>maxImpar2){
            maxImpar2 = x;
        }
    }
    if (maxPar == -1&& maxPar2 == -1 || maxImpar == -1 && maxImpar2 == -1){
        fout << "DA";
    } else {
        fout << "NU";
    }*/
        if (x%2 == 1 && x>maxPar){
            ok = 1;
        } else if (x%2 == 1 && x<maxPar){
            ok = 0;
            break;
        }
        if (x%2 == 0 && x> maxImpar){
            ok = 1;
        } else if (x%2 == 0 && x < maxImpar){
            ok  =0; 
            break;
        }
   }
   if (ok == 1){
        fout << "DA";
   } else {
        fout << "NU";
   }
        
    
}