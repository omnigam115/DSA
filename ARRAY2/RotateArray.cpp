#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n) {

    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, int arr[]){
    while(i<=j){
       int temp;
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of the array:= ";
    cin>>n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 1;
    }
    
    int arr[n];
    cout<<"Enter the elements of the array:= ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the position of the first element of the subarray to be reversed:= ";
    cin>>k;

    if (k < 0 || k >= n) {
        cout << "Position k is out of bounds." << endl;
        return 1;
    }


    reversePart(0,n-k-1,arr);
    reversePart(n-k,n-1,arr);
    reversePart(0,n-1,arr);

    display(arr,n);

}