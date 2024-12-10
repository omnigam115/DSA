#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<&arr<<endl;
    //0x61fefc  //// Here we can see that Array Address same as the first bytes of the element address.
    //0x61fefc
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;

    // 0x61fefc
    // 0x61ff00
    // 0x61ff04    //// We can see that there is 4-Bytes Gap in between elements.
    // 0x61ff08
    // 0x61ff0c
}