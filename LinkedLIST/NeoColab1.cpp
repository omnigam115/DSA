#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void appendLeft(Node* &head, int val) {
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void appendRight(Node* &head, Node* &tail, int val) {
    Node* temp = new Node(val);
    if (tail == nullptr) { // Check if the list is empty
        head = temp;      // If empty, both head and tail should point to the new node
        tail = temp;
    } else {
        tail->next = temp; // Link the new node to the end of the list
        tail = temp;       // Update the tail pointer
    }
}

void print(Node* &head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    int choice;
    int val;

    do {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> val;
                appendLeft(head, val);
                // If the list is empty, set tail to head
                if (tail == nullptr) {
                    tail = head;
                }
                break;
            case 2:
                cin >> val;
                appendRight(head, tail, val);
                break;
            case 3:
                cout << "Linked List: ";
                print(head);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}