// deleteStudent.c

#include <stdio.h>
#include "deleteStudent.h"
#include "addStudent.h"

void deleteStudent(int number){
    int found = 0;
    for(int i = 0; i < studentCount; i++){
        if(students[i].number == number){
            for(int j = i; j < studentCount; j++){
                students[j] = students[j + 1];
            }
            studentCount--;
            found = 1;
            printf("Delete student sccessfually!");
        }
    }

    if(found == 0){
        printf("The student is not exist, please check the student number!\n");
    }
}

void deleteStudentInterface(){
    int number;
    printf("Please input the student number to delete relative student.\n");
    scanf("%d", &number);
    deleteStudent(number);
}