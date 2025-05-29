// calculator.c

#include <stdio.h>
#include "calculator.h"
#include "io.h"

int add(int a, int b){
    int c = a + b;
    return c;
}

int sub(int a, int b){
    int c = a - b;
    return c;
}

int multi(int a, int b){
    int c = a * b;
    return c;
}

float div(int a, int b){
    float c = a / b;

    if(b == 0){
        printf("B is 0, the result is error!");
        exit(1);
    }

    return c;
}