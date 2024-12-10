#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin >> n;

    cout<<"Enter array elements: ";
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }


    cout<<"Value to insert at first position: ";
    int fisrt;
    cin>>fisrt;



    cout<<"Value to insert at last position: ";
    int last;
    cin>>last;

    cout<<"Value to insert at middle position: ";
    int middle;
    cin>>middle;


    cout<<"Enter the position for inserting value: ";
    int position;
    cin>>position;


    cout<<"Enter the value to be insert in the array: ";
    int value;
    cin>>value;


    v.insert(v.begin(),fisrt);

    v.push_back(last);

    int middleIndex = v.size()/2;

    v.insert(v.begin() + middleIndex,middle);


    v.insert(v.begin() + position, value);

    for(int i=0; i<v.size(); i++ ){
        cout<<v[i]<<" ";
    }
}