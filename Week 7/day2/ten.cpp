#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void printReverse(Node* temp) {
    if (temp == NULL)
        return;

    printReverse(temp->next);
    cout << temp->data << " ";
}

int main() {
    Node n1{10}, n2{20}, n3{30};

    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    printReverse(head);
}