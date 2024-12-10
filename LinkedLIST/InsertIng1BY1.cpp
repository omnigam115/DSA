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
    void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
    size++;
    }
    
    void display(){
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
    int val;
    while(true){
        cin>>val;
        if(val<0) break;
        ll.insertAtTail(val);
    }
    
    ll.display();
    
    return 0;
    
}


//// IN THIS WE CAN TAKE INFINTE INPUT BUT WHEN WE TAKE INPUT LESS THEN ZERO THEN LOOP
//// WILL BREAK AND WE WILL DISPLAY THE LINKED LIST WITH ALL THE ELEMENTS WE INSERTED IN