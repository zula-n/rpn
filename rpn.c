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
    char operators[10] = "+ - * / ^";
    char *token = strtok(expression, " ");
    double answer;
    
    while(token) {
        if (strstr(operators, token)) {
            node *num1node = pop();
            node *num2node = pop();
            double firstnum = num1node->value;
            double secondnum = num2node->value;
            printf(" %f %f ", firstnum, secondnum);

            switch (*token) {
                case '+':
                    answer = firstnum + secondnum;
                    push(createNode(answer, NUMBER));

                case '*':
                    answer = firstnum * secondnum;
                    push(createNode(answer, NUMBER));

                case '-':
                    answer = firstnum - secondnum;
                    push(createNode(answer, NUMBER));

                case '/':
                    answer = firstnum / secondnum;
                    push(createNode(answer, NUMBER));

                case '^':
                    answer = recursivePower(firstnum, secondnum);
                    push(createNode(answer, NUMBER));

                default:
                    break;
            }

        } else {
            node *new = createNode(strtod(token, NULL), NUMBER);
            push(new);
        }
            token = strtok(NULL, " ");
    }
}




