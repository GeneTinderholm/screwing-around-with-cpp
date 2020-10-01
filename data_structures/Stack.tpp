#include "Stack.hpp"
#include "NullPointerException.hpp"

template <class T>
Stack<T>::Stack(): head(NULL) {};

template <class T>
Stack<T>::~Stack() {
    while(head != NULL) {
        Node<T>* tmp = head;
        head = head->next;
        free(head);
    }
}

template <class T>
T Stack<T>::peek() {
    if (head == NULL) {
        NullPointer np;
        throw np;
    }
    return head->value;
}

template <class T>
T Stack<T>::pop() {
    T val = head->value;
    Node<T>* tmp = head;

    head = head->next;
    free(tmp);

    return val;
}

template <class T>
int Stack<T>::depth() {
    int count = 0;
    Node<T>* cur = head;

    while (head != NULL) {
        cur = head->next;
        ++count;
    }

    return count;
}

template <class T>
void Stack<T>::push(T value) {
    Node<T>* tmp = (Node<T>*) malloc(sizeof(T));
    tmp->value = value;
    tmp->next = head;
    head = tmp;
}

template <class T>
bool Stack<T>::is_empty() {
    return head == NULL;
}

template <class T>
void Stack<T>::print() {
    Node<T>* curr = head;
    while (curr->next != NULL) {
        std::cout << curr->value << " -> ";
        curr = curr->next;
    }
    std::cout << curr->value;
}
