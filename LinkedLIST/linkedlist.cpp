#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class linklist{
    public:
    node* head;
    node* tail;
    int size;
    linklist(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        node* temp = new node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        node* temp = new node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next = head;
            head= temp;
        }
        size++;
    }
    void insertatmiddle(int idx, int val){
        if(idx>size+1 || idx<1){
            return;
        }
        else if(idx == 1){
            insertathead(val);
            size++;
            return;
        }
        else if(idx == size+1){
            insertattail(val);
            size++;
            return;
        }
        else{
            node* temp = new node(val);
            node* prev = head;
            for(int i=0;i<idx-1;i++){
                prev = prev->next;
            }
            temp->next = prev->next;
            prev->next = temp;
        }
        size++;
        
        
    }
    
    void display(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp= temp->next;
        }
    }
};
int main(){
    linklist ll;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        ll.insertattail(val);
    }
    int a;
    cin>>a;
    ll.insertathead(a);
    
    int idx;
    cin>>idx;
    int c;
    cin>>c;
    int d;
    cin>>d;
    ll.insertattail(d);
    ll.insertatmiddle(idx,c);
    ll.display();
}

