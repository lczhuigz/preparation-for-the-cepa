#include <stdio.h>


int main(){
    int i;
    for(i = 1;i + 1;i++){
        if(i>4){
            printf("%d\t",i++);break;
        }
        printf("%d\t",i++);
    }
    

    return 0;
}