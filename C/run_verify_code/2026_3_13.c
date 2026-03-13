#include  <stdio.h>


int main(int argc, char **argv){ 

   int a,b,c,f;

   a = b = c = 1;

   f = ++a || ++b && ++c;

   printf("%d,%d,%d,%d",a,b,c,f);

   return 0;
}