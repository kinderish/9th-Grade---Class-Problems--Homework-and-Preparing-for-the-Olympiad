#include <iostream>
#include <cmath>
using namespace std;
//partial sums, cin all the values the verifying the partial sum, max one gets cout
long long v[100001];
long long s[500001];

int main(){
    int n, a,b,m;
    cin >> n;
    long long maxx = -pow(10, 14);
    for (int i = 1; i<=n; i++){
        cin >> v[i];
    }
    s[0] = 0;
    cin >> m;
    for (int i = 1; i<=n; i++){
        s[i] = s[i-1] + v[i];
    }
    for (int i = 1; i<=m; i++){
        cin >> a>> b;
        // if (a>b){
        //     int S = s[a]-s[b];
        //     if (s[a]-s[b]>maxx){
        //         maxx = s[a] - s[b];
        //     }
        // } else {
        //     int S = s[b]-s[a];
        //     if (s[b]-s[a]>maxx)
        //         maxx = s[b] - s[a];
        // } does not work, somehow gets stuck at else??
        long long S = s[max(a,b)]-s[min(a,b)-1];
        if (S>maxx){
            maxx = S;
        }
    }
    cout << maxx;
}