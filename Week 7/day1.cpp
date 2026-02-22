// Linear Queue
// #include <iostream>
// using namespace std;

// #define SIZE 5

// class LinearQueue {
//     int arr[SIZE];
//     int front, rear;

// public:
//     LinearQueue() {
//         front = -1;
//         rear = -1;
//     }

//     bool isFull() {
//         return rear == SIZE - 1;
//     }

//     bool isEmpty() {
//         return front == -1 || front > rear;
//     }

//     void enqueue(int value) {
//         if (isFull()) {
//             cout << "Queue is Full!\n";
//             return;
//         }

//         if (front == -1)
//             front = 0;

//         rear++;
//         arr[rear] = value;
//         cout << "Inserted successfully!\n";
//     }

//     void dequeue() {
//         if (isEmpty()) {
//             cout << "Queue is Empty!\n";
//             return;
//         }

//         cout << "Removed: " << arr[front] << endl;
//         front++;
//     }

//     void peek() {
//         if (isEmpty()) {
//             cout << "Queue is Empty!\n";
//             return;
//         }

//         cout << "Front Element: " << arr[front] << endl;
//     }

//     void display() {
//         if (isEmpty()) {
//             cout << "Queue is Empty!\n";
//             return;
//         }

//         cout << "Queue Elements:\n";
//         for (int i = front; i <= rear; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     LinearQueue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);

//     q.display();
//     q.peek();

//     q.dequeue();
//     q.display();

//     return 0;
// }

// Circular queue
#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return ((rear + 1) % SIZE == front);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full!\n";
            return;
        }

        if (isEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % SIZE;

        arr[rear] = value;
        cout << "Inserted successfully!\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }

        cout << "Removed: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }

        cout << "Front Element: " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!\n";
            return;
        }

        cout << "Queue Elements:\n";

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}