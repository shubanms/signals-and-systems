#include <math.h>
#include <stdio.h>
#include <conio.h>

#define L1 4
#define L2 4

int x[L1+L2-1] = {1,2,3,4};
int h[L1+L2-1] = {1,2,1,2};
float y[L1+L2-1];

int main(){
    int i, j, k;

    for(i=0; i<(L1+L2-1) ; ++i){
        y[i] = 0;
        for(j=0; j<=i; ++j){
            y[i] = y[i] + (x[j]*h[i-j]);
        }
    }

    for(i=0;i<(L1+L2-1); ++i){
        k = y[i]; printf("\t%d", k);
    }

    return 0;
}
