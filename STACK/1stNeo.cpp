// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void push(vector<int>& stack,int n){
    if(stack.size()==10){
        cout<<"Stack is full! "<<endl;
    }else{
        stack.push_back(n);
    }
}

void pop(vector<int> &stack){
    if(stack.empty()){
        cout<<"Stack is empty! "<<endl;
    }else{
        stack.pop_back();
    }
}

void checkfull(vector<int> &stack){
    if(stack.size()==10){
        cout<<"Stack is full! "<<endl;
    }else{
        cout<<"Stack is not full"<<endl;
    }
}

void checkempty(vector<int>& stack){
    if(stack.empty()){
        cout<<"Stack is empty!"<<endl;
    }else{
        cout<<"Stack is not empty"<<endl;
    }
}

int main(){
    vector<int> stack;
    int choice;
    
    while(true){
        cin>>choice;
        
        int n;
        
        if(choice==1){
            cin>>n;
            push(stack,n);
        }else if(choice==2){
            pop(stack);
        }else if(choice==3){
            checkfull(stack);
        }else if(choice==4){
            checkempty(stack);
        }else if(choice==5){
            break;
        }else{
            cout<<"Invalid choice"<<endl;
        }
    }
    
    return 0;
}