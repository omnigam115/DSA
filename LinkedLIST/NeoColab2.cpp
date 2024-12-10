#include<bits/stdc++.h>
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

void insertAtPosition(Node* &head, int n, int data) {
    Node* temp = head;
    int count = 1;

    while(count < n-1) {
        temp = temp->next;
        count++;
    }

    Node* insertElement = new Node(data);
    insertElement->next = temp->next;
    temp->next = insertElement;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, pos, newElement;
    cin >> n;

    // Create the linked list
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        Node* newNode = new Node(value);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cin >> pos;
    cin >> newElement;

    // Insert the new element at the given position
    insertAtPosition(head, pos, newElement);

    // Print the updated list
    printList(head);

    return 0;
}


/////// OUTPUT //////// 
//5
// 2 3 9 6 1
// 3
// 8
