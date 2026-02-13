/*
题目：
    C语言实现：求出0～999之间的所有“水仙花数”并输出。
    “水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char ** argv){

    for (int i = 100; i < 999; i++){
        int l = i % 10;
        int m = (i / 10) % 10;
        int h = i / 100;

        if(i == (pow(h, 3) + pow(m, 3) + pow(l, 3))){
            printf("%d\n",i);
        }
    }
    
    
    return 0;
}