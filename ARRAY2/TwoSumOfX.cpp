#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;    
    cout<<"Enter Size Of Array:= ";
    cin>>a;
    cout<<"Enter Elements in the Array";
    int arr[a];
    for(int i=0; i<=a-1; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter The Target Value:= ";
    cin>>x;
    int sum = 0;
    for(int i=0; i<=a-2; i++){
        for(int j=i+1; j<=a-1; j++ ){
            if(arr[i]+arr[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
                break;
            }
        }
    }
}