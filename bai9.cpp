#include <iostream>
#define MAX 100 

class Queue {
private:
    int queue[MAX];
    int front, rear; 
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX-1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "HANG DOI DAY!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "HANG DOI RONG!" << endl;
            return -1;
        }
        int x = queue[front];
        front++;
        return x;
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "HANG DOI RONG!" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(41);
    q.enqueue(23);
    q.enqueue(4);
    q.enqueue(14);
    q.enqueue(56);
    q.enqueue(1);
    cout << "HANG DOI SAU KHI THEM:" << endl;
    q.enqueue(55);
    q.printQueue();
    int removed = q.dequeue();
    if (removed != -1) {
        cout << "PHA BO PHAN TU " << removed << endl;
    }
    cout << "HANG DOI SAU KHI BO:" << endl;
    q.printQueue();
    return 0;
}
