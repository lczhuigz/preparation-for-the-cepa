/*
题目：
    C语言实现：两个整数的交换。
*/
#include <stdio.h>


int main(int argc, char ** argv){

    int a = 10, b = 20;
    // //1.利用中间变量
    // int temp = a;
    // a = b;
    // b = temp;

    // //2.求和做差
    // a = a + b;
    // b = a - b;
    // a = a - b;
    
    //3.按位异或
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a=%d b=%d",a,b);


    return 0;
}