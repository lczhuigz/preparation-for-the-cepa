/*
题目：
    实现将三个数从小到大输出
*/
#include <stdio.h>


void swap(int * a, int * b);


int main(int argc, char ** argv){

    int a = 2, b = 1, c = 3;
    
    if(a < b){
        swap(&a, &b);
    }
    if(b < c){
        swap(&b, &c);
    }
    if(c < a){
        swap(&c, &a);
    }
    if(c < b){
        swap(&c, &b);
    }

    printf("%d %d %d",a, b, c);

    
    return 0;
}


void swap(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}