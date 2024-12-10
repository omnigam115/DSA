#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array Size:= ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of the Array:= ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    cout<<"The Maximum Element in the Array is: "<<max<<endl;
    cout<<"The Second Maximum Element in the Array is: "<<smax<<endl;
}