#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAfter(int x, int y) {
    Node* temp = head;

    while (temp != NULL && temp->data != x)
        temp = temp->next;

    if (temp == NULL)
        return;

    Node* newNode = new Node();
    newNode->data = y;
    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node n1{10}, n2{20}, n3{30};
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    insertAfter(20, 25);

    cout << "After Insert: ";
    display();
}