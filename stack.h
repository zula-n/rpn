//
// Created by zula nyamtur on 3/30/21.
//

#ifndef PS4_STACK_H
#define PS4_STACK_H

typedef struct node node;
void push(node*); //Push a node onto the stack

node* pop( );	 	// Pop the top of the stack

node* peek( );//Return a reference to the node on top of the stack

void clearStack();


#endif //PS4_STACK_H
