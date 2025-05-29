// addStudent.h

#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

struct Student{
    char name[100];
    int age;
    int number;
    char sex;
};

extern int studentCount;
extern struct Student students[];


void addStudent(struct Student student);

void addStudentInterface();

#endif