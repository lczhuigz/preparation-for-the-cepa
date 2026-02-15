/*
题目：  
    C语言实现打印一个菱形图案
*/
#include <stdio.h>


#define line 7


int main(int argc, char ** argv){
    
    int i;
    for(i = 0; i < line; i ++){
        for(int space = 0; space < line - i; space ++){
            printf(" ");
        }
        for(int k = 0; k < i * 2 + 1; k ++){
            printf("*");
        }
        putchar('\n');
    }

    for(i = line - 1; i >= 1; i --){
        for(int space = 0; space < line - i; space ++){
            printf(" ");
        }
        for(int k = 1; k < i * 2 + 1; k ++){
            printf("*");
        }
        putchar('\n');
    }

    
    return 0;
}