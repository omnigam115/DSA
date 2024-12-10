#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size Of array := ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array := ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element You Want to Search in Array := ";
    cin>>x;

    /// Check Mark or Boolen ///
    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Element is Presrnt";
    }
    else{
        cout<<"Element is Not Present";
    }
}