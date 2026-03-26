/*
题目：
    求二维数组中最大元素值及其行列号。
*/
#include <stdio.h>


int main(int argc, char **argv){

    int a[3][4] = {{1,2,3,4}, {9,8,7,6,}, {-10,10,-5,2}};
    int index_H = 0,index_L = 0;
    int max_val = a[0][0];

    for(int h = 0; h < 3; h ++){
        for(int l = 0; l < 4; l ++){
            if(a[h][l] > max_val){
                max_val = a[h][l];
                index_H = h;
                index_L = l;
            }
        }
    }

    printf("max_val=%d,H=%d,L=%d",max_val,index_H + 1,index_L + 1);


    return 0;
}