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
    
void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size==0){
        head = tail = temp;
    }else{
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
    cout<<endl;
    }
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int val;
   
        cin>>val;
        ll.insertAtHead(val);
    }
    
    cout<<"Created Linked list: ";
    ll.display();
    
    int m;
    cin>>m;
    ll.insertAtHead(m);
    
    cout<<"Final List: ";
    ll.display();
    
    return 0;

}
