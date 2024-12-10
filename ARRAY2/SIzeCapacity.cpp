#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; 
    v.push_back(6);  // C = 1  C = 1 
    v.push_back(1);  //     2      2
    v.push_back(9);  //     3      4
    v.push_back(10); //     4      4
    v.push_back(9);  //     5      8  
    v.push_back(10);  // Similarly all are there 
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(9);
    v.push_back(10);            //the total size = 20
    v.push_back(6);             //the total capacity = 32
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);

    cout<<"The Size of the Vector is"<<v.size()<<endl;
    cout<<"The Capacity of the Vector is"<<v.capacity()<<endl;

    v.pop_back();   
    v.pop_back();
    v.pop_back();            // the total size = 20-6 = 14
    v.pop_back();            // the total capacity is same  = 32
    v.pop_back();
    v.pop_back();

    cout<<"The Size of the Vector is"<<v.size()<<endl;
    cout<<"The Capacity of the Vector is"<<v.capacity()<<endl;




}