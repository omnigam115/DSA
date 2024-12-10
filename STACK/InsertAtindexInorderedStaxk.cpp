#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5

    int idx = 2;
    stack<int> temp1;
    while(st.size()>idx){
        temp1.push(st.top());
        st.pop();
    }
    
    int x = 60;
    st.push(x);

    while(st.size()>0){
        temp1.push(st.top());
        st.pop();
    }

    stack<int> temp2;
    while(temp1.size()>0){
        temp2.push(temp1.top());
        temp1.pop();
    }

    while(temp2.size()>0){
        st.push(temp2.top());
        temp2.pop();
    }

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}