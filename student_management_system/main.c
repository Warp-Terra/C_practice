// main.c

#include <stdio.h>
#include "menu.h"
#include "addStudent.h"
#include "viewAllStudent.h"
#include "searchStudent.h"
#include "deleteStudent.h"

int studentCount = 0;
struct Student students[100];

int main(){
    while(1){
        int x;
        displayMenu();
        scanf("%d", &x);
        switch(x){
            case 1:
                addStudentInterface();
                break;
            case 2:
                viewAllStudent();
                break;
            case 3:
                searchStudentInterface();
                break;
            case 4:
                deleteStudentInterface();
                break;
            case 0:
                exit(0);
            default:
                printf("The input is invalid, please try again!");
                
        }

    }
}