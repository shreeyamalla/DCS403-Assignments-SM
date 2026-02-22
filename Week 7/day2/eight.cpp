#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

int countNodes() {
    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    Node n1{10}, n2{20}, n3{30};
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    cout << "Node Count: " << countNodes();
}