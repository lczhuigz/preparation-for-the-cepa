/*
题目：
    编写一个程序，由函数 main 函数和函数 fun 组成。函数 fun 的功能是计算 n（包括n）
    以内能被 5 或 9 整除的所有自然数的倒数之和；函数 main 的功能是输入 n，求出 s = fun(n)
    并输出s的值。
*/
#include <stdio.h>


float fun(int n){

    float sum = 0.0;
    for(int i = 1; i <= n; i ++){
        if((i % 5 == 0) || (i % 9 == 0)){
            sum += 1.0 / i;
        }
    }
    
    return sum;
}


int main(int argc, char **argv){

    int n = 0;
    float s = 0.0;
    scanf("%d",&n);
    s = fun(n);
    printf("%f",s);

    
    return 0;
}