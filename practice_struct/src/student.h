#ifndef STUDENT_H
#define STUDENT_H

struct student {
    int age;
    float score;
    char sex;
};

void print_student(struct student s);
struct student creat_student(int age, float score, char sex);


#endif