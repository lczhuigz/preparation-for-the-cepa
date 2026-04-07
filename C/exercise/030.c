/*
题目：
    编写程序，由键盘输入一元二次方程ax2+bx+c=0（a≠0）的a、b、c的值，求方程的解。
*/
#include <stdio.h>
#include <math.h>


int main(int argc, char **argv){

    double a, b, c, x1, x2, r, i, delt;
    printf("Please input the equation coefficients a,b,c: ");
    scanf("%lf,%lf,%lf", &a, &b, &c); 
    printf("\nThen equation "); 
    
    if(fabs(a) <= 1e-6){
        printf("is not a quadratic\n");
    }else{ 
        delt = b*b-4*a*c; 
        if(fabs(delt) <= 1e-6) 
        printf("has two equal roots:%8.4f\n", -b/(2*a)); 
        else 
        if(delt > 1e-6){
            x1 = (-b+sqrt(delt))/(2*a); 
            x2 = (-b-sqrt(delt))/(2*a); 
            printf("has distinct real roots:%8.4f and %8.4f\n", x1,x2); 
        }else{
            r = -b/(2*a); 
            i = sqrt(-delt)/(2*a); 
            printf("has complex roots:\n"); 
            printf("%8.4f+%8.4fi\n",r,i); 
            printf("%8.4f-%8.4fi\n",r,i); 
        } 
    } 


    return 0;
}