#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);

    // v.at(2) = 23;
    // cout<<v.at(2);

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    ///// sort /////
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }

    
}