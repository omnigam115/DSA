#include<iostream>
using namespace std;
class Node{   //// LINKED LIST NODE /////
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
    
};
int  main(){
    ///// 10 20 30 40 50
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);
    /// forming Link list ///
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    //// printing d ki value

    // cout<<d.next->val<<endl;
    // cout<<(a.next)->next->val<<endl;
    // cout<<(((a.next)->next)->next)->val;

    Node temp = a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL){
            break;
        }
        temp = *(temp.next);
    }
    
}