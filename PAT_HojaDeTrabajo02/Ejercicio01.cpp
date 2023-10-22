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
    Node<char>* headf=head;

    int banse = 0;

    while (banse < k) {
        tmp = headf;
        while (tmp != NULL && tmp->next != NULL) {
            tmp2 = tmp;
            tmp = tmp->next;

        }
        tmp->next = headf;
        headf = tmp;
        tmp2->next = NULL;
        tmp2 = tmp2->next;
        banse++;
    }
    return headf;
}
