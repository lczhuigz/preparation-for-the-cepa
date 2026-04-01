/*
题目：
    编程，将字符数组S2中的全部字符拷贝到字符数组S1中(不用strcpy 函数)
*/
#include <stdio.h>


int main(int argc, char ** argv){

    char src_string[] = "hello world!";
    char dest_string[100] = {};

    // //1.用while循环遍历逐一替换
    // int i = 0;
    // while(src_string[i] != '\0'){
    //     dest_string[i] = src_string[i];
    //     i ++;
    // }
    // dest_string[i] = '\0';

    //2.用指针的方式
    char *src = src_string;
    char *dest = dest_string;

    while(*dest ++ = *src ++);

    printf("src_str:%s\n",src_string);
    printf("dest_str:%s\n",dest_string);

    
    return 0;
}