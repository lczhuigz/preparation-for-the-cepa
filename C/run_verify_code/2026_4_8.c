#include <stdio.h>
#include <string.h>


int main(int argc, char **argv){

    char str[] = "welcome";
    printf("%d\n",strlen(strcpy(str,"Hello")));

    
    return 0;
}