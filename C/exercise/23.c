/*
题目：
    用递归求：1+2+3+4+...+n
*/
#include <stdio.h>


int fun(int x){
    if(x == 1){
        return 1;
    }else{
        return x + fun(x - 1);
    }
}


int main(int argc, char **argv){

    int n = 0;
    scanf("%d",&n);
    printf("%d",fun(n));

    
    return 0;
}