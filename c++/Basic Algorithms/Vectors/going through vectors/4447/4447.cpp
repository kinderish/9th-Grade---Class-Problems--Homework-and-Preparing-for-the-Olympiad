/*
n boxes of sweets
we know the number of sweets form every box
boxes of sweets needs to be same for every kid >=2
all / all but one boxes need to be given

inneficient, but could work: smallest common divisor of two, then the next two etc etc
eg: 2 7 4 1 2 
I: 2 - 7 = 1
II: 1 - 4 = 1 // we take the values after the first operation
III: 1 - 1= 1
    .
    .
this does not work for the first task, maybe for the second ( one prime number and all the values are 1)
for the first task, we could make use of the number of boxes

to find out the number of the kids that receive a box, we divide the no. 
of the boxes to 2 if they are even or (no-1)/2 because the denominator can't
be bigger than 2, because then it won't be max number
*/
#include <fstream>
using namespace std;

ifstream fin("cadouri.in");
ofstream fout("cadouri.out");

int v[100001];

int main(){
    int numarCutii, C, nrCopiiCarePrimescCutii, i, minn = 2147483647, s, maxx = 0;
    fin >> C;
    fin >> numarCutii;
    for (int i = 1; i<=numarCutii; i++){
        fin >> v[i];
        if (v[i]<minn){
            minn = v[i];
        }
    }
    
    if (C == 1){
        if (numarCutii%2==0){
            nrCopiiCarePrimescCutii = numarCutii/2;
            fout << nrCopiiCarePrimescCutii <<" "<< 0;
        }else{
            nrCopiiCarePrimescCutii = (numarCutii-1)/2;
            fout << nrCopiiCarePrimescCutii <<" "<< minn;
        }
    }else {
        for (i = 1; i<=numarCutii; i++){
            s = v[i] + v[i+1];
            if (s > maxx){
                maxx = s;
            }
        }
        if (numarCutii % 2 == 0){
            fout << maxx << " " << 0;
        }else{
            fout << maxx << " " << minn;
        }
    }
    fin.close();
    fout.close();
}