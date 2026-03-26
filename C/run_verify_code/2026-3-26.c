#include <stdio.h>


void func(int *a){
    *a = *a + 10;
}


int main(){

    int b = 5;
    func(&b);
    printf("%d\n",b);


    return 0;
}