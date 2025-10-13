#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;
};

void printList(Node* n) {
    // printa de maneira recursiva a minha linked list
    if (n == NULL) {
        return;
    } else {
        cout << n->value << endl;
        printList(n->next);
    }

    /*
    while (n != NULL) {
        cout << n->value << endl;
        n=n->next;
    }
    */
}

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->next = second;
    
    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    printList(head);

    return 0;
}