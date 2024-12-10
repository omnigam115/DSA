#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array:= ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of Array:= ";
    for(int i=0 ;i<=n-1; i++){
        cin>>arr[i];
    }

    int min = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min<<endl;
}