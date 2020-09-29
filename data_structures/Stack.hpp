#ifndef __STACK_H_
#define __STACK_H_
#include <stdlib.h>
#include "LinkedList.hpp"
#include "NullPointerException.hpp"

template <class T>
class Stack {
    Node<T>* head;
    public:
        Stack(): head(NULL) {};
        T peek() {
            if (head == NULL) {
                NullPointer np;
                throw np;
            }
            return head->value;
        }

        T pop() {
            T val = head->value;
            Node<T>* tmp = head;

            head = head->next;
            free(tmp);

            return val;
        }

        int depth() {
            int count = 0;
            Node<T>* cur = head;

            while (head != NULL) {
                cur = head->next;
                ++count;
            }

            return count;
        }

        void push(T value) {
            Node<T>* tmp = (Node<T>*) malloc(sizeof(T));
            tmp->value = value;
            tmp->next = head;
            head = tmp;
        }

        bool is_empty() {
            return head == NULL;
        }
};
#endif
