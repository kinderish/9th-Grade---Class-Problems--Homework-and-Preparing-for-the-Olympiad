#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;


int sirk(int p){
    int k = 1, a1 = 1, ak, s = 0, dr, st, r = 2;
    s = a1;
    while (k > dr){
        st = dr;
        dr += k *r;
        k++;
    }
    if (p == 1){
        return 1;
    } else {
        if (p < dr - k + 1)
            //return p - s + 2 * k -1;
            return abs(st - p) + 1;
         else
            return s - p + 1;
    }
}

int main()
{
    assert(sirk(1)==1);
    assert(sirk(2)==2);
    assert(sirk(3)==1);
    assert(sirk(9)==3);
    assert(sirk(15)==3);
    assert(sirk(17)==5);
    assert(sirk(20)==2);

    return 0;
}
