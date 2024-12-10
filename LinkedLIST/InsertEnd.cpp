#include <iostream>
using namespace std;

struct Node {
    int roll;
    Node* add;
};

Node* start = nullptr;
Node* last = nullptr;

Node* create(int value) {
    Node* ptr = new Node();
    ptr->roll = value;
    ptr->add = nullptr;
    return ptr;
}

void insert_at_last(Node* np) {
    if (start == nullptr) {
        start = np;
        last = np;
    } else {
        last->add = np;
        last = np;
    }
}

void display() {
    if (start == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* d = start;
    while (d != nullptr) {
        cout << d->roll << " --> ";
        d = d->add;
    }
    cout << "NULL" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the linked list: ";
    cin >> size;

    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Enter value for node " << (i + 1) << ": ";
        cin >> value;
        Node* temp = create(value);
        insert_at_last(temp);
    }

    cout << "Linked list after insertion:" << endl;
    display();

    return 0;
}
