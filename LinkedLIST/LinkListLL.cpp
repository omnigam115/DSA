#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d) {
    // Insert at start
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the node just before the required position
    while (count < position - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }

    // Create a new node and insert it
    Node* newNodetoinsert = new Node(d);
    newNodetoinsert->next = temp->next;
    temp->next = newNodetoinsert;

    // If we are at the last node, update the tail
    if (newNodetoinsert->next == NULL) {
        tail = newNodetoinsert;
    }
}

void Display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the first node
    int initialData;
    cout << "Enter the first node value: ";
    cin >> initialData;

    Node* node1 = new Node(initialData);
    Node* head = node1;
    Node* tail = node1;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at Head\n";
        cout << "2. Insert at Tail\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int data;
            cout << "Enter value to insert at head: ";
            cin >> data;
            insertAtHead(head, data);
        } else if (choice == 2) {
            int data;
            cout << "Enter value to insert at tail: ";
            cin >> data;
            insertAtTail(tail, data);
        } else if (choice == 3) {
            int data, position;
            cout << "Enter value to insert: ";
            cin >> data;
            cout << "Enter position to insert at: ";
            cin >> position;
            insertAtPosition(tail, head, position, data);
        } else if (choice == 4) {
            Display(head);
        }

    } while (choice != 5);

    cout << "\nFinal List:\n";
    Display(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
