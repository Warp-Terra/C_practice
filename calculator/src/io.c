//io.c

#include <stdio.h>
#include "io.h"

int put_your_number(int *a, int *b){
    printf("please input the first number:\n");
    scanf("%d", a);
    printf("please input the second number:\n");
    scanf("%d", b);
}