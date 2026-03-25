/*
题目：
    C语言实现：交换两个等长整形数组的内容。
*/
#include <stdio.h>


int main(int argc, char ** argv){
    
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 0};

    for(int i = 0; i < sizeof(array1)/sizeof(array1[0]); i ++){
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    for (size_t i = 0; i < sizeof(array1)/sizeof(array1[0]); i++){
        printf("%d ",array1[i]);
    }

    putchar('\n');

    for (size_t i = 0; i < sizeof(array2)/sizeof(array2[0]); i++){
        printf("%d ",array2[i]);
    }
    

    return 0;
}
