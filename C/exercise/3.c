/*
题目：不使用除2的方式求2个整数的平均值
*/
#include <stdio.h>


int main(int argc, char ** argv){

    int a = 10;
    int b = 20;
    //int average = a + (b - a) / 2;
    int average = (a & b) + ((a | b) >> 1);
    printf("avg=%d",average);

    
    return 0;
}