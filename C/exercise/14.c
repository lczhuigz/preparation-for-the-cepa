/*
题目：
    C语言实现：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。
*/
#include <stdio.h>


int main(int argc, char ** argv){

    int money = 0, total = 0, empty = 0;
    scanf("%d",&money);
    total = money;
    empty = money;
    // //1.
    // while(empty > 1){
    //     total += empty / 2;
    //     empty = empty / 2 + empty % 2; 
    // }
    //2.
    if(money <= 0){
        total = 0;
    }else{
        total = money * 2 - 1;
    }

    printf("total=%d",total);


    return 0;
}