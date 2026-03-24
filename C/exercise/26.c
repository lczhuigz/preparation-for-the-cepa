/*
题目：
    打印如下图案：
     *
    ***
   *****
  *******
 *********
*/
#include <stdio.h>


int main(int argc, char **argv){
    
    int i;
    for(i = 0;i < 5; i ++){
        for(int j = 0; j < 5 - i ; j ++){
            printf(" ");
        }

        for(int k = 0; k < i * 2 + 1; k ++){
            printf("*");
        }
        putchar('\n');
    }


    return 0;
}