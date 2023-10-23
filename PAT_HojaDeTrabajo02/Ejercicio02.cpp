#include "Ejercicio02.h"
#include <string>

Node<int>* Ejercicio02::addTwoNumbers(Node<int>* l1, Node<int>* l2)
{
    if (l1 == nullptr && l2 == nullptr) {
        return nullptr;
    }
    if (l1 == nullptr) {
        return l2;
    }
    if (l2 == nullptr) {
        return l1;
    }
    if (l1->value == 0) {
        return l2;
    }
    if (l2->value == 0) {
        return l1;
    }
    Node<int>* headf = nullptr;
    Node<int>* tmp=l1;
    int num;
    int c1 = 0;
    int c2 = 0;
    while (tmp != nullptr) {
        tmp = tmp->next;
        c1++;
    }
    c1 = c1 - 1;
    c2 = c1 - 1;
    num = l1->value;
    l1 = l1->next;
    while (l1 != nullptr) {
        num += (l1->value) * (pow(10, (c1 - c2)));
        l1 = l1->next;
        c2--;
    }
    c1 = 0;
    c2 = 0;
    tmp = l2;
    while (tmp != nullptr) {
        tmp = tmp->next;
        c1++;
    }
    c1 = c1 - 1;
    c2 = c1 - 1;
    num = l2->value;
    l2 = l2->next;
    while (l2 != nullptr) {
        num += (l2->value) * (pow(10, (c1 - c2)));
        l2 = l2->next;
        c2--;
    }
    std::string snum;
    snum = std::to_string(num);
    Node<int> tail = new Node<int>();
    tail->value = stoi(snum[snum.size() - 1]);
    tail->next = nullptr;
    headf = tail;
    for (int i = 1; i < (snum.size() - 1); i++) {
        Node<int> newNode = new Node<int>();
        newNode->value = stoi(snum[(snum.size()) - 1]);
        newNode->next = headf;
        headf = newNode;
    }
    return headf;
    
    
}
