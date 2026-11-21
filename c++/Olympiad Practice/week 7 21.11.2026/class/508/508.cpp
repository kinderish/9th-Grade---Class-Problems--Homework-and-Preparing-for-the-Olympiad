#include <iostream>
using namespace std;

int x[25001];
int n, m, y, i = 1;

int exista(int y){
    int mid, st = 1, dr = n;
    while (st<=dr){
        mid = st + (dr-st)/2;
        if (x[mid]==y)
            return 1;
        else
            if(x[mid]<y)
                st = mid + 1;
            else
                dr = mid-1;
    }
    return 0;
}

int main(){
    cin >> n;
    for (int i =1; i<=n; i++){
        cin >> x[i];
    }
    cin >> m;
    for (int j = 1; j<=m; j++){
        cin >> y;
        cout << exista(y)<< " ";
    }
}
// #include <iostream>
// using namespace std;
// int v[25001];
// int n,m,x,i=1;
// bool val(int x){
//     int st=1,dr=n;
//     while(st<=dr){
//         int mid=st+(dr-st)/2;
//         if(v[mid]==x){
//             return true;
//         }
//         else{
//             if( v[mid]<x){
//                 st=mid+1;
//             }
//             else dr=mid-1;
//         }
//     }
//     return false;
// }
// int main(){
    
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>v[i];
//     }
//     cin>>m;
//     for(int i=1;i<=m;i++){
//         cin>>x;
//         cout<<val(x)<<" ";
//     }
    
// }