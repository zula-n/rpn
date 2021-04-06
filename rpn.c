//
// Created by zula nyamtur on 3/30/21.
//

#include "rpn.h"
#include "string.h"
#include "stack.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

struct node {
    double value;
    int type;
    struct node *next;
};

double recursivePower(double first,double second){
    if(second == 0){
        return 1;
    }
    else{
        double result = first*recursivePower(first, second -1 );
        return result;
    }
}

double evaluate (char* expression, int* status){
    char operators[] = "+ - * / ^";
    char *token = strtok(expression, " ");
    double answer;

    while(token) {
        if (strstr(operators, token)) {
            node *num1node = pop();
            node *num2node = pop();
            double firstnum = num1node->value;
            double secondnum = num2node->value;

            switch (*token) {
                case '+':
                    answer = firstnum + secondnum;
                    push(createNode(answer, NUMBER));
                    break;
                case '*':
                    answer = firstnum * secondnum;
                    push(createNode(answer, NUMBER));
                    break;
                case '-':
                    answer = firstnum - secondnum;
                    push(createNode(answer, NUMBER));
                    break;
                case '/':
                    answer = firstnum / secondnum;
                    push(createNode(answer, NUMBER));
                    break;
                case '^':
                    answer = recursivePower(firstnum, secondnum);
                    push(createNode(answer, NUMBER));
                    break;
                default:
                    //fputs( "Invalid operand!", stderr );
                    //exit( 1 );
                    break;
            }

        } else if(!strstr(operators, token)){
            node *new = createNode(strtod(token, NULL), NUMBER);
            push(new);

        }
            token = strtok(NULL, " ");
    }
}




