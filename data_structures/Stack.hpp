#ifndef __STACK_H_
#define __STACK_H_
#include "LinkedList.hpp"

template <class T>
class Stack {
    Node<T>* head;
    public:
        Stack();
        T peek();
        T pop();
        int depth();
        void push(T value);
        bool is_empty();
};
#endif
