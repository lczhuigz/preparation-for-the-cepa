/*
题目：
    C语言实现n的k次方（递归实现）
*/
#include <stdio.h>


int power(int n, int k);


int main(int argc, char ** argv){
    int n = 0, k = 0;
    scanf("%d %d",&n,&k);
    printf("%d",power(n, k));
    return 0;
}


int power(int n, int k){
    // //1.
    // if(k == 0){
    //     return 1;
    // }else if(k > 0){
    //     return n * power(n, k - 1);
    // }
    //2.
    if(k <= 0){
        return 1;
    }else{
        return n * power(n, k - 1);
    }    
}