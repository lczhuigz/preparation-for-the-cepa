/*
题目：
    试编程从键盘输入2*3 的二维数组,将该数组行列交换输出
*/
#include <stdio.h>


int main(int argc, char **argv){

    int matrix[2][3] = {};
    
    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 2; j ++){
            printf("%d ",matrix[j][i]);
        }
        putchar('\n');
    }


    return 0;
}