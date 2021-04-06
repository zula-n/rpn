//
// Created by zula nyamtur on 3/30/21.
//
#include <stdio.h>
#include <stdlib.h>
#include "rpn.h"
#include "node.h"
#include "stack.h"
#include "errors.h"


int main(){
    int status = 0;

    char test1[ ] = {"24.2 12 / 3 / 17 + +"};
    char test2[ ] = {"+"};
    char test3[ ] = {"17 22 / 4 * 16 -"};
    char test4[ ] = {"2 8 ^ 3 /"};
    char test5[ ] = {"17 22 33 / 4 + 2"};
    char test6[ ] = {""};
    char test7[ ] = {"8 7 + 6 - 5 / 4 * 3 ^"};


    double one = evaluate(test1, &status);
    double two = evaluate(test2, &status);
    double three = evaluate(test3, &status);
    double four = evaluate(test4, &status);
    double five = evaluate(test5, &status);
    double six = evaluate(test6, &status);
    double seven = evaluate(test7, &status);


    printf("\n1:%.2f\n", one);
    printf("2:\n",  two);
    printf("3:\n", three);
    printf("4:\n", four);
    printf("5:\n", five);
    printf("6:\n", six);
    printf("7:\n", seven);


}



