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

    char expression1[ ] = {"24.2 12"};
    /**char expression2[ ] = {"+"};
    char expression3[ ] = {"17 22 / 4 * 16 -"};
    char expression4[ ] = {"2 8 ^ 3 /"};
    char expression5[ ] = {"17 22 33 / 4 + 2"};
    char expression6[ ] = {""};
    char expression7[ ] = {"8 7 + 6 - 5 / 4 * 3 ^"}; **/
    printf("fjilsajf\n");

    double result1 = evaluate(expression1, &status);
   /** double result2 = evaluate(expression2, &status);
    double result3 = evaluate(expression3, &status);
    double result4 = evaluate(expression4, &status);
    double result5 = evaluate(expression5, &status);
    double result6 = evaluate(expression6, &status);
    double result7 = evaluate(expression7, &status);**/

    printf("%.2f is the answer to first expression \n", result1);
    /**
    printf("%f is the answer to second expression \n", result2);
    printf("%f is the answer to third expression \n", result3);
    printf("%f is the answer to fourth expression \n", result4);
    printf("%f is the answer to fifth expression \n", result5);
     **/

}


