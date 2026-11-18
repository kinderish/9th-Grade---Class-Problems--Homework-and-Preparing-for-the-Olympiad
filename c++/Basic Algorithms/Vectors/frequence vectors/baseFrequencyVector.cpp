#include <iostream>
#include <algorithm>
using namespace std;
//a base algorithm of a frequency vector. the commented code is an attempt
// int main(){
//     int v[101] = {0}, n, i, fr[101] = {0}, ok = 0,p = 0;
//     cin >> n;
//     for (i = 1; i<=n; i++){
//         cin >> v[i];
//     }
//     for(i = 1; i<=n; i++){
//         ok = 0;
//         for (int h =1; h<=n &&; h++){
//             if (i != h && v[i] == v[h]){
//                 ok = 1;
//                 break;
//             }
//         }
//         if (ok == 0){
//             int cont = 1;
//             for (int j = i+1; j<=n+1; j++){              
//                 if (v[i] == v[j]){
//                     cont++;
//                     p++;
//                 }
//             }
//             fr[p] = cont;
//         }
        
//     }
//     for (i = 1; i<=p; i++){
//         cout << fr[i] << " ";
//     } 
// }

int main(){
    int v[101] ={0}, fr[101] = {0}, n, i, maxx = 0;
    cin >> n;
    for (i =1; i<=n; i++){
        cin >> v[i];
        fr[v[i]]++;
    }
    for (i = 1; i<=101; i++){
        if (fr[i]>maxx && fr[i] != 0){
            maxx = fr[i];
        }
    }
    cout << maxx;
}