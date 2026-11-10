#include <iostream>
using namespace std;
int main()
{
    int vec[10] = {0}, n, i, nr = 0, uc;
    cin >> n;
    i=1;
    while (n>0){
    		uc = n % 10;
    		if (uc == 0) {
    			n /= 10;
    		} else {
    			vec[i] = uc;
    			n/=10;
    			i++;
    		}

    }
    int p = 1, copiei = i-1;
    while (copiei>0){
        p *=10;
        copiei--;
    }
    p = p/10;
    for (i = i-1;i>=1;i--){
    	uc = vec[i];
    	nr = nr+uc*p;
    	p/=10;
    }
    cout << nr;
}
