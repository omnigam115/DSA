#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &Head,int data){
    Node* temp = new Node(data);
    temp->next = Head;
    Head = temp;
}

void insertAtTail(Node* &Tail,int data){
    Node* temp = new Node(data);
    Tail->next = temp;
    Tail = temp;
}

void insertAtPosition(Node* &Head,Node* &Tail,int n,int data){

    // Handle case when the list is empty
    if (Head == NULL && n > 1) {
        cout << "Position out of bounds. The list is empty." << endl;
        return;
    }
    // Handle case when the list has only one node //
    //// insert at Head ///
    if(n==1){
        insertAtHead(Head,data);
        return;
    }
    Node* temp = Head;
    int count = 1;
    while(count<n-1){
        temp = temp->next;
        count++;
    }

    //// creating a Node for Data ////
    Node* NodeToInsert = new Node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;

   if (temp->next == NULL) {
        insertAtTail(Tail,data);
        return;
    }
}

void Print(Node* &Head){
    Node* temp = Head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){

    Node* Node1 = new Node(10);

    Node* Head = Node1;

    Node* Tail = Node1;

    cout<<Node1->data<<endl;

    insertAtHead(Head,5);
    Print(Head);
    cout<<endl;
    insertAtTail(Tail,15);
    Print(Head);
    cout<<endl;
    insertAtPosition(Head,Tail,2,20);
    Print(Head);
    cout<<endl;
    insertAtPosition(Head,Tail,1,3);
    Print(Head);
    cout<<endl;
    insertAtPosition(Head,Tail,5,30);
    Print(Head);
    cout<<endl;
    cout<<"Head Node-> "<<Head->data<<endl;
    cout<<"Tail Node-> "<<Tail->data;
        


   
}