#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    int min = arr[0];
    
    for(int i=1; i<n; i++){
        if(arr[i]>min){
            cout<<arr[i]<<endl;
            break;
        }
    }
    return 0;
}