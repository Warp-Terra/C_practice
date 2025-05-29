//searchStudent.c

#include <stdio.h>
#include "searchStudent.h"
#include "addStudent.h"


void searchStudent(int n){
    for(int i = 0; i < studentCount; i++){
        if(students[i].number == n){
            printf("The student name is %s.\n", students[i].name);
            printf("The student age is %d.\n", students[i].age);
            printf("The student sex is %c.\n", students[i].sex);
            printf("The student number is %d.\n", students[i].number);
        }else{
            printf("The target student do not exist, please input correct student number!");
        }
    }
}

void searchStudentInterface(){
    int n;
    printf("Please input student number to search student information\n");
    scanf("%d", &n);
    searchStudent(n);
}