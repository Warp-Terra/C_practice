#include <stdio.h>
#include "student.h"


void print_student(struct student s){
    printf("年龄：%d, 分数：%.2f, 性别：%c\n", s.age, s.score, s.sex);
}


struct student creat_student(int age, float score, char sex){
    struct student s;
    s.age = age;
    s.score = score;
    s.sex = sex;
    return s;
}

