/*
题目：
    编写一个程序，实现以下功能:
        1.定义一个结构体Student，包含学号，姓名、成绩三个成员:
        2.输入5个学生的信息:
        3.输出平均成绩;
        4.输出成绩最高的学生信息。
*/
#include <stdio.h>


typedef struct{
    int id;
    char name[6];
    float score;
}Student;


int main(int argc, char **argv){

    float sum = 0.0,max_score = 0.0;
    int index = 0;
    Student student[5];

    printf("请输入5个学生的信息(学号、姓名、成绩，中间用空格间隔)\n");
    //1.输入时求和
    for(int i = 0; i < 5; i ++){
        scanf("%d %s %f",&student[i].id,student[i].name,&student[i].score);
        sum += student[i].score;
    }
    // //2.单独求和
    // for(int i = 0; i < 5; i ++){
    //     sum += student[i].score;
    // }
    printf("avg=%.2f\n",sum / 5);

    max_score = student[0].score;

    for(int i = 0; i < 5; i ++){
        
        if(student[i].score > max_score){
            max_score = student[i].score;
            index = i;
        }
    }

    printf("成绩最高的学生信息:id=%d,name=%s,score=%.2f\n",student[index].id,
        student[index].name,
        student[index].score
    );


    return 0;
}