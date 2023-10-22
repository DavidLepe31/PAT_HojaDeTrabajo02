#include "Ejercicio01.h"

int Ejercicio01::getlength(Node<char>* head1)
{
    int count = 0;
    while (head1 != NULL) {
        head1 = head1->next;
        count++;
    }
    return count;
    
}

Node<char>* Ejercicio01::rotateRight(Node<char>* head, int k)
{
    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        return head;
    }
    Node<char>* tmp = head;
    Node<char>* tmp2 = nullptr;
    Node<char>* headf=head;

    int banse = 0;
    int s = k % getlength(head);
    while (banse < s) {
        tmp = headf;
        while (tmp != nullptr && tmp->next != nullptr) {
            tmp2 = tmp;
            tmp = tmp->next;

        }
    
        tmp->next = headf;
        headf = tmp;
        tmp2->next = nullptr;
        tmp2 = tmp2->next;
        banse++;
    }
    return headf;
}
