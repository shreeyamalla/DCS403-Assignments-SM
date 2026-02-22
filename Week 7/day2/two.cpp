#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void search(int x) {
    Node* temp = head;
    int pos = 1;

    while (temp != NULL) {
        if (temp->data == x) {
            cout << "Element found at position " << pos;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "Element not found";
}

int main() {
    Node n1{10}, n2{20}, n3{30};
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    search(20);
}