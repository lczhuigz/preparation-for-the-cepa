/*
题目：求10个整数中的最大值
*/
#include <stdio.h>


int main(int argc, char **argv){
    
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = *array;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        if (array[i] > max){
            max = array[i];
        }
    }

    printf("max value is: %d",max);


    return 0;
}