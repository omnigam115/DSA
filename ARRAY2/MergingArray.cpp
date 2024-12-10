#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=n;i<n+m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n+m;i++){
        cout<<arr[i]<<" ";
    }
}