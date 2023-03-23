#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 20

int main(){

    int i;
    double vt[N], *punt;

    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        punt = &vt[i];
        printf("%.2f ", *punt);
        punt++;
    }
    return 0;
}