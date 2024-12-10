#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Array Size";
    cin >> n;
    cout<<"Enter the number elements:= ";
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        }
    int brr[n];
    int x;
    for(int i=0;i<=n-1;i++){
       brr[i] = arr[n-1-i];
        }
    for(int i=0;i<=n-1;i++){
        cout<<brr[i]<<" ";
        }
    cout<<endl;
}