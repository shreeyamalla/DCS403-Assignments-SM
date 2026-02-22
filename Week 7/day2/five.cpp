#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteValue(int x) {
    if (head == NULL)
        return;

    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != x)
        temp = temp->next;

    if (temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

int main() {
    // Create sample list
    Node n1{10}, n2{20}, n3{30};
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    deleteValue(20);

    cout << "After Deletion: ";
    display();
}