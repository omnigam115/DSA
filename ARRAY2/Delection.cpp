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

    cout<<"Enter the position for deleting value: ";
    int position;
    cin>>position;

    // delete at specified position
    v.erase(v.begin() + position-1);

    // delete at middle position
    int middleIndex = v.size()/2;
    v.erase(v.begin() + middleIndex);

    // delete at last position
    v.pop_back();

    // delete at first position
    v.erase(v.begin());

    for(int i=0; i<v.size(); i++ ){
        cout<<v[i]<<" ";
    }

    return 0;
}