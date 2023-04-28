#include <iostream>

const int MAXSIZE = 100; 

class Stack {
    int top; 
    int arr[MAXSIZE]; 

public:
    Stack() { top = -1; } 

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAXSIZE - 1);
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
        }
        else {
            top++;
            arr[top] = x;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return 0;
        }
        else {
            int x = arr[top];
            top--;
            return x;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return 0;
        }
        else {
            return arr[top];
        }
    }

    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
        }
        else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(41);
    s.push(23);
    s.push(4);
    s.push(14);
    s.push(56);
    s.push(1);
    cout << "Top element: " << s.pop() << endl;
    s.printStack();
    return 0;
}
