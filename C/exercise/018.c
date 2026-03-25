/*
题目：
    使用C语言计算两个数的最大公约数。
*/
#include <stdio.h>


int main(int argc, char ** argv){

    int m = 24, n = 18, temp;
    do{
        temp = m%n;
        m = n;
        n = temp;
    } while (temp == 0);
    
    printf("%d",n);


    return 0;
}