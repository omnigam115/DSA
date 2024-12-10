#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    int *arr;
    int frontIndex;
    int rear;
    int size;

    // Constructor to initialize the queue
    Queue() {
        size = 200;
        arr = new int[size];
        frontIndex = 0; 
        rear = 0;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return frontIndex == rear;
    }

    // Enqueue function to add an element to the queue
    void enqueue(int data) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    // Dequeue function to remove an element from the queue
    int dequeue() {
        if (frontIndex == rear) {
            return -1;  // Queue is empty
        } else {
            int ans = arr[frontIndex];
            arr[frontIndex] = -1;  // Optional, to visualize the removal
            frontIndex++;
            if (frontIndex == rear) {  // Reset the queue when it's empty
                frontIndex = 0;
                rear = 0;
            }
            return ans;
        }
    }

    // Function to get the element at the front of the queue
    int getFront() {
        if (frontIndex == rear) {
            return -1;  // Queue is empty
        } else {
            return arr[frontIndex];
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    cout << "Front element: " << q.getFront() << endl;  // Corrected function name to getFront
    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;

    return 0;
}
