#include <iostream>
#include "lib.h"
using namespace std;

int main () {
    int n;
    cin>>n;
    float max[n];
    for (int i=0; i<n; i++) {
        cin>>max[i];
    }
    float m=n_max(max, n);
    cout<<m;

    return 0;
}
