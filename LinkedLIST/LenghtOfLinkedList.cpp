#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

int main() {
    // Creating nodes
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    
    // Assigning values to nodes
    head->data = 1;
    second->data = 2;
    third->data = 3;
    
    // Linking nodes
    head->next = second;
    head->prev = NULL;
    
    second->next = third;
    second->prev = head;
    
    third->next = NULL;
    third->prev = second;
    
    // Finding length of the doubly linked list
    int count = 0;
    struct Node* curr = head;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }
    
    // Printing length
    cout << "Length of Doubly Linked List: " << count << endl;

    return 0;
}
