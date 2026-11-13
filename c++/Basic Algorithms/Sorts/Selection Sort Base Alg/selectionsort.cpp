#include <iostream>
using namespace std;

int main(){
    int vec[10001] = {0}, i = 1, x, poz = 1, aux;
    while (cin >> x){
        vec[i] = x;
        i++;
    }
    int sortat, nesortat = i, copiei = i;
    i = 1;
    for (sortat = 1; sortat <= copiei - 1; sortat++){
        i = poz;
        int min = vec[poz];
        while (i!=copiei){
            i++;
            if (vec[i] < min){
                aux = vec[poz]; 
                vec[poz] = vec[i];
                vec[i] = aux;
            }
        }
        poz++;
    }
    for (i = 1; i<=copiei; i++){
        cout << vec[i] << " ";
    }
}