#include <stdio.h>


int main(int argc, char **argv){

    int *p, *q, k = 1, j = 10;
    p = &j;
    q = &k;
    p = q;
    (*p) ++;
    printf("%d",*q);

    
    return 0;
}