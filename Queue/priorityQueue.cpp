#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[][2],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j][1]>arr[j+1][1]){
                swap(arr[j][0],arr[j+1][0]);
                swap(arr[j][1],arr[j+1][1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    
    int arr[n][2];
    
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    
    bubbleSort(arr,n);
    
    cout<<"Priority Queue: ";
    for(int i=0; i<n; i++){
        cout<<arr[i][0]<<" ";
    }
    cout<<endl;
}   


// Input 1 :
// 5
// 101 3
// 102 5
// 103 4
// 104 2
// 105 1
// Output 1 :
// Priority Queue: 105 104 101 103 102 
// Input 2 :
// 3
// 201 8
// 202 9
// 203 7
// Output 2 :
// Priority Queue: 203 201 202 