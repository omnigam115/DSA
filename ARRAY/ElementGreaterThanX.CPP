#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array:= ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array:= ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    int x; 
    cout<<"Enter the Number:= ";
    cin>>x;
    int count = 0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"The number of elements greater than "<<x<<" is "<<count<<endl;
}