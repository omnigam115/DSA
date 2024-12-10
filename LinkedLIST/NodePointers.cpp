#include<iostream>
using namespace std;
class Node{   //// LINKED LIST NODE ////
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    
};

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
};

// void display(Node* head){
//     while(head==NULL) return;
//     cout<<head->val;
//     display(head->next);
// };

void reverseDispaly(Node* head){
    if(head==NULL) return;
    reverseDispaly(head->next);  //// call
    cout<<head->val<<" ";  //// kamm
}

void size(Node* head){
    Node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    cout<<n<<endl;
};

// void dispalyrec(Node* head){
//     if(head==NULL) return;   //// base case 
//     cout<<head->val<<" ";  //// kamm
//     dispalyrec(head->next);  //// call
// }
void insertAtHead(Node*& head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node* head, int val){
    Node* newNode = new Node(val);
    while(head->next!=NULL){
        head = head->next;
    }
    head->next = newNode;
}
int  main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    // cout<<c->next->next->next->val<<endl;

    // Node* temp = a;
    // while(temp != NULL){
    //     cout << temp->val <<" ";
    //     temp = temp->next;    
    // }

    display(a);
    size(a);
    insertAtTail(a, 7);
    display(a);
    size(a);

    insertAtHead(a,0);
    display(a);
    size(a);

    // dispalyrec(a);
    // reverseDispaly(a);
    ////display(a);
}