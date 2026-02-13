/*
题目：
    使用C语言实现，打印1000-2000年之间的闰年
*/
#include <stdio.h>


int main(int argc, char ** argv){
    
    for(int year = 1000; year <= 2000; year ++){
        if((((year % 4) == 0) && ((year % 100) != 0)) || ((year % 400) == 0)){
            printf("%d ",year);
        }
    }


    return 0;
}