#include <stdio.h>
#include "student.h"

int main(){
    struct student s1 = creat_student(20, 100, 'f');
    struct student s2 = creat_student (19, 98, 'm');

    print_student(s1);
    print_student(s2);
}