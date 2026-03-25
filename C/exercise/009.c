/*
题目：
    使用C语言打印100~200之间的素数
*/
#include <stdio.h>
#include <math.h>


int isPrime(int n);


int main(int argc, char ** argv){

    for(int i = 100; i <= 200; i ++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    return 0;
}


int isPrime(int n){

    if (n <= 1) return 0;  // 1和负数不是素数
    if (n == 2) return 1;  // 2是素数
    if (n % 2 == 0) return 0;  // 排除偶数（除了2）

    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {  // 只检查奇数因子
        if (n % i == 0) {
            return 0;
        }
    }

    
    return 1;
}