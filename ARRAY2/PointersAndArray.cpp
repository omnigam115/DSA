#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int * ptr = arr; // Giving address
    // cout << ptr << endl;
    // ptr[0] = 6;
    // *ptr = 6;// ptr[0] = 6;  they both are same 
    for(int i=0; i<=5-1; i++){
        cout <<*ptr<<" ";
        ptr++;
    }
    ptr = arr;    // ptr is pointing to 1st element of the array...

    *ptr = 8;  // ptr[0] = 8
    ptr++;     //  ptr is pointing to Second element....
    *ptr = 9;  // ptr[1] = 9
    ptr--;     // Again ptr is pointing to 1st element of the array...

    cout<<endl;

    for(int i=0; i<=5-1; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
}