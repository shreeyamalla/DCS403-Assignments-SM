#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void deletePosition(int pos) {
    if (head == NULL)
        return;

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp->next != NULL; i++)
        temp = temp->next;

    if (temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
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

    deletePosition(2);

    cout << "After Deleting Position 2: ";
    display();
}