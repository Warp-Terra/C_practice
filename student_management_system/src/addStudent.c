// addStudent.c

#include <stdio.h>
#include "addStudent.h"

extern int studentCount;
extern struct Student students[];


void addStudent(struct Student student){
    students[studentCount++] = student;
    printf("Add a student sccessfully!\n");
    // printf("Please input new student information\n");
    // printf("Please input student's name:\n");
    // scanf("%99s", students->name);
    // printf("Please input student's age:\n");
    // scanf("%d", &students->age);
    // printf("Please input student's number:\n");
    // scanf("%d", &students->number);
    // printf("Please input student's sex:\n");
    // scanf(" %c", &students->sex);
    // students->deleted = 0;
    // studentCount++;
    // printf("Add a student sccessfully!");
}

void addStudentInterface(){
    struct Student newStudents = {0};
    printf("Please input new student information\n");
    printf("Please input student's name:\n");
    scanf("%99s", newStudents.name);
    printf("Please input student's age:\n");
    scanf("%d", &newStudents.age);
    printf("Please input student's number:\n");
    scanf("%d", &newStudents.number);
    printf("Please input student's sex:\n");
    scanf(" %c", &newStudents.sex);
    addStudent(newStudents);
}