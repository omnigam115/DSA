#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10); // 1
    st.push(20); // 2
    st.push(30); // 3
    st.push(40); // 4
    st.push(50); // 5
    
    vector<int> v;
    while(st.size()>0){
        v.push_back(st.top());
        st.pop();
    }

    int n = 80;
    st.push(n);

    for(int i=0; i<v.size(); i++){
        st.push(v[i]);
    }

    int x = 70;
    st.push(x);
    

    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}