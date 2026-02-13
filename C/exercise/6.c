/*
题目：
    C语言编写程序数一下1到100的所有整数中出现多少次数字9
*/
#include <stdio.h>


int main(int argc, char ** argv){
    
    int count = 0;
    for(int i = 1; i < 100; i ++){
        if(i % 10 == 9){
            count ++;
        }
        if(i / 10 == 9){
            count ++;
        }
    }

    printf("%d",count);


    return 0;
}