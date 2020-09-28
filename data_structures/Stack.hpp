#ifndef __STACK_H_
#define __STACK_H_
#include "LinkedList.hpp"

class Stack {
    int_node* head;
    public:
        Stack();
        int peek();
        int depth();
        int pop();
        void push(int);
        bool is_empty();
};
#endif
