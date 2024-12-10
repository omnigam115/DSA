#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

// Function to insert a node at the head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Function to insert a node at the tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Function to insert a node at a specific position
void insertAtPosition(Node* &head, Node* &tail, int position, int d) {
    // Insert at start
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the (position-1)th node
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // If inserting at the last position, update the tail
    if (temp != NULL && temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // Insert in the middle
    Node* newNodetoinsert = new Node(d);
    newNodetoinsert->next = temp->next;
    temp->next = newNodetoinsert;
}

// Function to delete a node at a specific position
void deleteNode(int position, Node* &head, Node* &tail) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    // Deleting the first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

        // If the list becomes empty, update the tail as well
        if (head == NULL) {
            tail = NULL;
        }

        return;
    }

    // Deleting any node other than the first
    Node* current = head;
    Node* prev = NULL;
    int count = 1;

    // Traverse to the (position)th node
    while (count < position && current != NULL) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    prev->next = current->next;

    // If deleting the last node, update the tail
    if (current->next == NULL) {
        tail = prev;
    }

    current->next = NULL;
    delete current;
}

// Function to display the list
void Display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create a new node
    Node* node1 = new Node(10);
    cout << node1->data << endl;

    // Head and Tail pointed to node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);
    Display(head);

    insertAtTail(tail, 18);
    Display(head);

    insertAtPosition(head, tail, 1, 9);
    Display(head);

    insertAtPosition(head, tail, 3, 7);
    Display(head);

    insertAtPosition(head, tail, 6, 45);
    Display(head);

    deleteNode(1, head, tail);
    Display(head);

    deleteNode(3, head, tail);
    Display(head);

    deleteNode(4, head, tail);
    Display(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    return 0;
}
