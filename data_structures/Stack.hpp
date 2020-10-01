#ifndef __STACK_H_
#define __STACK_H_
#include <stdlib.h>
#include "LinkedList.hpp"
#include <iostream>

template <class T>
class Stack {
    Node<T>* head;
    public:
        Stack();
        ~Stack();
        T peek(); 
        T pop(); 
        int depth(); 
        void push(T value); 
        bool is_empty(); 
        void print(); 
};

#include "Stack.tpp"
#endif
