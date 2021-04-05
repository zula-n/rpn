//
// Created by zula nyamtur on 3/30/21.
//
#include "node.h"
#include <stdlib.h>

struct node {
        double value;
        int type;
        struct node *next;
};

node* createNode(double value, int type){
    node *new = NULL; //declare a node
    new = (struct node*)malloc(sizeof(node));
        new -> value = value;
        new -> type = type;
        new -> next = NULL; //make next point to NULL
        return new; //return the new node
}

