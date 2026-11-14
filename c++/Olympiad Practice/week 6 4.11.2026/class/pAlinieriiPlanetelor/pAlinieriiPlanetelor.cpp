#include <iostream>
using namespace std;

int main(){
    int r1, r2, a, b, c,copieb, r3, copiec, copiea;
    cin >> a>> b>>c;
    int cmmdc = a*b*c;
    copiea = a;
    copieb = b;
    copiec = c;
    r1 = a%b;
    while (r1){
        r1 = a % b;
        a = b;
        b = r1;
    }
    r2 = copieb % c;
    while (r2){
        r2 = copieb%c;
        copieb = c;
        c = r2;
    }
    r3 = copiea % copiec;
    while (r3){
        r3 = copiea%copiec;
        copiea = copiec;
        copiec = r3;
    }
    cmmdc = cmmdc / (copiea*copieb*copiec);
    cout << cmmdc; 

}