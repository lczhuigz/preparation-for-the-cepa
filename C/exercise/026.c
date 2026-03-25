/*
题目：
    现有36块砖,由男人、女人、小孩共36个人搬。已知:男人一次搬4块,女人一次搬3块,2个小孩抬1块,
    要求一次性刚好搬完。问男人、女人、小孩各多少人？请编程解决该问题。
*/
#include <stdio.h>


int main(int argc, char **argv){

    for(int man = 1; man <= 9; man ++){
        for(int woman = 1; woman <= 12; woman ++){
            int child = 36 - man - woman;
            if(child % 2 == 0){
                if((man*4 + woman*3 + child/2) == 36){
                    printf("man=%d,woman=%d,child=%d\n",man,woman,child);
                }
            }  
            
        }
    }


    return 0;
}