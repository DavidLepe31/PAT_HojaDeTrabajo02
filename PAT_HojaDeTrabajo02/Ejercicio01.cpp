#include "Ejercicio01.h"

Node<char>* Ejercicio01::rotateRight(Node<char>* head, int k)
{
    if (head == nullptr) {
        return head;
    }

    if (head->next == nullptr) {
        return head;
    }
    Node<char>* tmp = head;
    Node<char>* tmp2 = nullptr;
    int banse = 0;

    while (banse < k) {
        tmp = head;
        while (tmp && tmp->next) {
            tmp2 = tmp;
            tmp = tmp->next;

        }
        tmp->next = head;
        head = tmp;
        tmp2->next = nullptr;
        banse++;
    }
    return head;
}
