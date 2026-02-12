#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu(void);
void game(void);


int main(int argc, char ** argv){

    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("Plese,select >\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("game exited!\n");
            break;
        default:
            printf("select error!\n");
            break;
        }
    } while (input);
    

    return 0;
}


void menu(void){
    printf("**********************\n");
    printf("*****   1. play   ****\n");
    printf("*****   0. exit   ****\n");
    printf("**********************\n");
}

void game(void){
    
    int ret = rand()%100 + 1;
    int getnum = 0;
    printf("please, input a integer number in [0,100]\n");
    while(1){
        scanf("%d",&getnum);
        if (ret == getnum){
            printf("congratulation,guess aright!\n");
            break;
        }else if (ret >= getnum){
            printf("guess number is small! again,please\n");
        }else{
            printf("guess number is big! again,please\n");
        }
    }
}