/*
题目：
    编一个程序，利用数组求费波那契(Fibonacci)序列：1,1,2,3,5,8,...请按每行5个数的格式输出前20项序列满足关系式F[n] = F[n-1] + F[n-2]
*/
#include <stdio.h>


#define SIZE 20


int main(int argc, char **argv){

    int Fibo_array[SIZE] = {};

    Fibo_array[0] = 1;
    Fibo_array[1] = 1;
    for(int i = 2; i < SIZE; i ++){
        Fibo_array[i] = Fibo_array[i - 1] + Fibo_array[i - 2];
    }

    for(int j = 0; j < SIZE; j ++){
        printf("%d\t",Fibo_array[j]);
        if((j + 1) % 5 == 0){
            putchar('\n');
        }
    }


    return 0;
}