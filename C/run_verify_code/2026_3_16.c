#include <stdio.h>


int main(int argc, char **argv){
    
    int a[6] = {12, 4, 17, 25, 27, 16}, b[6] = {27, 13, 4, 25, 23, 16}, i, j;
    for (i = 0; i < 6; i ++)
    {
        for(j = 0; j < 6; j ++)
            if(a[i] == b[j]) break;  //continue

        if(j < 6) printf("%d ",a[i]);
    }

    putchar('\n');
    
    return 0;
}