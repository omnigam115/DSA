#include<iostream>
using namespace std;
void dispaly(int * a, int size){ // int * a / or / int a[] is the pointer 
    for(int i=0; i<=size-1; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change (int b[], int size){ // int * b / or / int b[] is the pointer
    b[2] = 100;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    // accessing the elements of array in the another function
    // updation, pass by value / refrerence ?
    dispaly(arr, size);
    change(arr, size);
    dispaly(arr, size);
}