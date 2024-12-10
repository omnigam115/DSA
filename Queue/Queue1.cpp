#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Size of Queue is:- "<<q.size()<<endl;
    q.pop();
    cout<<"Size of Queue is:- "<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queue is not Empty"<<endl;
    }
    cout << "Front of Queue:- "<<q.front() << endl; // prints 1
}



// queue::empty()	O(1)
// queue::size()	O(1)
// queue::emplace()	O(1)
// queue::front()	O(1)
// queue::back()	O(1)
// queue::push(g) 	O(1)
// queue::pop() 	O(1)