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
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }

    int x = 60;
    st.push(x);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }


    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}