#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){ // added val parameter
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp; 
            tail = temp; 
        }
        size++;
    }


    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }


    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl; // added closing brace
    }
};

int main(){
    LinkedList ll; 
    ll.insertAtEnd(10); // corrected function name
    ll.display();
    ll.insertAtEnd(20); // corrected function name
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtEnd(40);
    ll.display();
    cout<<ll.size<<endl;

    ll.insertAtHead(50);
    ll.display();
    cout<<ll.size<<endl;

    ll.insertAtHead(60);
    ll.display();

    return 0; // added return statement
}