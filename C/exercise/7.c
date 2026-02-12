/*
在屏幕上打印杨辉三角
*/
#include <stdio.h>


#define matrix_size 20


int main(int argc, char ** argv){

    int array[matrix_size][matrix_size] = {0};
    for(int i = 0; i < matrix_size; i ++){
        for (int j = 0; j < matrix_size; j ++){
            if(j == 0 || i == j){
                array[i][j] = 1;
            }else if(i > 1 && j > 0){
                array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
            }
        }
    }

    for(int i = 0; i < matrix_size; i ++){
        for(int space = 0; space < matrix_size - i; space++){
            printf("   ");
        }
        for (int j = 0; j < i; j ++){
            printf("%-5d ",array[i][j]);
        }
        putchar('\n');
    }


    return 0;
}