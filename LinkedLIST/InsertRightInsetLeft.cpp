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
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    
    void appendLeft(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
        }else{
            temp->next = head;
            head = temp;
        }
    }

    void appendRight(int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }
    }

    void printList(){
        Node* temp = head;
        if(temp == NULL){
            cout<<"Linked List is empty."<<endl;
            return;
        }
        cout<<"Linked List: ";
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    int choice, val;
    while(true){
        cin>>choice;
        if(choice == 1){
            cin>>val;
            ll.appendLeft(val);
        }else if(choice == 2){
            cin>>val;
            ll.appendRight(val);
        }else if(choice == 3){
            ll.printList();
        }else if(choice == 4){
            break;
        }else{
            cout<<"Invalid choice"<<endl;
        }
    }
    
    return 0;
}