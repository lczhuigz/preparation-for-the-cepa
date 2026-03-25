/*
题目：
    使用C语言求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2+22+222+2222+22222
*/
#include <stdio.h>


int main(int argc, char ** argv){
    
    int a = 0, n = 0, sum = 0, k = 0;
    printf("please, input a,n separated by a space.\n");
    scanf("%d %d",&a,&n);
    for(int i = 0;i < n; i ++){
        k = k * 10 + a;
        sum += k;
    }

    printf("%d",sum);


    return 0;
}