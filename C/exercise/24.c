/*
题目：
    输入两个数组（数组元素个数自定），输出在两个数组中都出现的元素（如a[5] = {2, 3, 4, 5, 6}, b[6] = {3, 5, 7, 9, 10, -1},则输出3，5)
*/
#include <stdio.h>


int main(int argc, char **argv){

    int a[5] = {2, 3, 4, 5, 6};
    int b[6] = {3, 5, 7, 9, 10, -1};
    // //1.
    // int j;
    // for(int i = 0; i < 5; i ++){
    //     for(int j = 0; j < 6; j ++){
    //         if(a[i] == b[j]){
    //             break;
    //         }
    //     }
    //     if(j < 6){
    //         printf("same number:%d\n",a[i]);
    //     }
    // }
    //2.
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 6; j ++){
            if(a[i] == b[j]){
                printf("same number:%d\n",a[i]);
            }
        }
    }


    return 0;
}