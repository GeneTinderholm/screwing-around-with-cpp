#include <stdlib.h>
#include "Stack.hpp"
#include "LinkedList.hpp"
#include "NullPointerException.hpp"

Stack::Stack(): head(NULL) {};
int Stack::peek() {
    if (head == NULL) {
        NullPointer np;
        throw np;
    }
    return head->value;
}

int Stack::depth() {
    int count = 0;
    int_node* cur = head;

    while (head != NULL) {
        cur = head->next;
        ++count;
    }

    return count;
}

int Stack::pop() {
    int val = head->value;
    int_node* tmp = head;

    head = head->next;
    free(tmp);

    return val;
}

void Stack::push(int val) {
    int_node* tmp = (int_node*) malloc(sizeof(int_node));
    tmp->value = val;
    tmp->next = head;
    head = tmp;
}

bool Stack::is_empty() {
    return head == NULL;
}

