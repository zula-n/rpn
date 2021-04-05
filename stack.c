//
// Created by zula nyamtur on 3/30/21.
//

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>
#include "node.h"

struct node{
    double value;
    int type;
    struct node *next;
};

struct node* Topptr = NULL;

void push(node *new){
    if(Topptr != NULL){
        Topptr -> next = new;
        new = Topptr;
    }
    else{
        Topptr = new;
        //fputs("Error: Out of memory\n", stderr);
    }
}

node* pop() {
    if (Topptr -> next != NULL){
        node* placeholder = Topptr;
        Topptr = Topptr -> next;
        placeholder -> next = NULL;
        return placeholder;
    }
    else{
        return Topptr;
        //fputs("The stack is empty. \n", stderr);
    }

}

node* peek(){
    if(Topptr != NULL){
        return Topptr;
    }
    else{
        printf("The stack is empty.\n");
    }
}
void clearStack(){
    while(Topptr -> next){
        node* placeholder = Topptr;
        Topptr = Topptr -> next;
        placeholder -> next = NULL;
    }
    Topptr = NULL;
}