/*
题目：
    C语言实现：计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
*/
#include <stdio.h>


int main(int argc, char ** argv){
    
    double sum = 0.0;
    int flag = 1;
    for(int i = 1; i <= 100; i ++){
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("sum=%lf",sum);


    return 0;
}
