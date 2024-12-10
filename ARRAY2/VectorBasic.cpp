#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not to mention size...
    // inserting / input do not use [] brackets
    // v.push_back(6);
    // cout<<v.size()<<endl;  // Size = 1
    // v.push_back(1);
    // cout<<v.size()<<endl;  // size = 2
    // v.push_back(9);
    // cout<<v.size()<<endl;  // size = 3
    // v.push_back(0);
    // cout<<v.size()<<endl;  // size = 4

    v.push_back(6);
    cout<<v.capacity()<<endl;  // capacity = 1
    v.push_back(1);
    cout<<v.capacity()<<endl;  // capacity = 2
    v.push_back(9);
    cout<<v.capacity()<<endl;  // capacity= 4
    v.push_back(0);
    cout<<v.capacity()<<endl;  // capacity = 4

    // if you want to Access / Update
    //v[0]=34;
    //v[1]=56;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}