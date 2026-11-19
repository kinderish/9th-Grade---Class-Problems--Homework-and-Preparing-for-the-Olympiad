#include <iostream>
using namespace std;

int main(){
    int n, v[1001];
    cin >> n;
    for (int i = 1; i<=n; i++){
        cin >> v[i];
    }
    bool sortat;
    do{
        sortat = true;
        for(int i = 1; i < n ; i++)
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sortat = false;
            }
    } while(!sortat);
    for (int i = 1; i<=n; i++){
        cout << v[i]<< " ";
    }
}
