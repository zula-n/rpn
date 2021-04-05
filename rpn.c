//
// Created by zula nyamtur on 3/30/21.
//

#include "rpn.h"
#include "string.h"
#include "stack.h"
#include "node.h"
#include <stdio.h>
#include <stdlib.h>

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
    while(token) {
        /**if(strtok(operators, token)){
            node* num1node = pop();
            node* num2node = pop();
            double firstnum = num1node -> value;
            double secondnum = num2node -> value;
            switch(*token) {
                double answer;
                case '+':
                    answer = firstnum + secondnum;
                    push(createNode(answer, NUMBER));
                    return answer;
                case '*':
                    answer = firstnum * secondnum;
                    push(createNode(answer, NUMBER));
                    return answer;
                case '-':
                    answer = firstnum - secondnum;
                    push(createNode(answer, NUMBER));
                    return answer;
                case '/':
                    answer = firstnum / secondnum;
                    push(createNode(answer, NUMBER));
                    return answer;
                case '^':
                    answer = recursivePower(firstnum, secondnum);
                    push(createNode(answer, NUMBER));
                    return answer;
                default:
                    break;
            }

        }**/

        node *new = createNode(strtod(token, NULL), NUMBER);
        push(new);
        node *num1node = pop();
        node *num2node = pop();
        printf(" %p %p ", num1node, num2node);

        token = strtok(NULL, " ");
    }
}




