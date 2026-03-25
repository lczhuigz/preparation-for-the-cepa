/*
题目：
    C语言实现：九九乘法表。
*/
#include <stdio.h>


int main(int argc, char ** argv){

    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= i; j ++){
            printf("%d*%d=%-2d  ",j,i,i*j);
        }
        putchar('\n');
    }


    return 0;
}