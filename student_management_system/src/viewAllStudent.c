// viewAllStudent.c

#include <stdio.h>
#include "viewAllStudent.h"
#include "addStudent.h"



void viewAllStudent(){
    if(studentCount == 0){
        printf("The student list empty, no information to display!");
        return;
    }

    for(int i = 0; i < studentCount; i++){
        printf("This is the No.%d student.\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Student Number: %d\n", students[i].number);
        printf("Sex: %c\n", students[i].sex);
    }

}