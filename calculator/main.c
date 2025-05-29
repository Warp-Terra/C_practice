//main.c

#include <stdio.h>
#include "calculator.h"
#include "io.h"

int main(){

    int x;
    int a;
    int b;
    int result_int;
    float result_float;


    printf("please input the number to choose the algorithm you want to use\n");
    printf("1 is add\n");
    printf("2 is sub\n");
    printf("3 is multi\n");
    printf("4 is div\n");

    scanf("%d", &x);

    switch(x){
        case 1:
            put_your_number(&a, &b);
            result_int = add(a, b);
            printf("The result is %d\n", result_int);
            break;

        case 2:
            put_your_number(&a, &b);
            result_int = sub(a, b);
            printf("The result is %d\n", result_int);
            break;

        case 3:
            put_your_number(&a, &b);
            result_int = multi(a, b);
            printf("The result is %d\n", result_int);
            break;

        case 4:
            put_your_number(&a, &b);
            result_float = div(a, b);
            printf("The result is %.2f\n", result_float);
            break;

        default:
            printf("The number is invalid, please try again!");
    }
}