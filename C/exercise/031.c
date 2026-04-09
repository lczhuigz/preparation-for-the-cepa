/*
题目：
    编写一个程序，通过键盘输入年月日，计算该日是这一年的第几天。
*/
#include <stdio.h>


int main(int argc, char **argv){

    int year, month, day;
    // 索引0占位，对应1-12月的平年天数
    int days_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_day = 0;

    printf("请输入年月日，用空格分隔：");
    scanf("%d %d %d", &year, &month, &day);

    // 累加当前月之前所有月份的天数
    for (int i = 1; i < month; i++) {
        total_day += days_of_month[i];
    }
    // 加上当前月份的日期
    total_day += day;

    // 闰年且月份大于2月，额外加1天
    if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2) {
        total_day += 1;
    }

    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, total_day);

    
    return 0;
}