#include "lib.h"
float n_max (float max[], int a){
    float m=max[0];
    for (int i=0; i<a; i++) {
        if(max[i]>m){
            m=max[i];
        }
    }
    return m;
}
