#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size:= ";
    cin >> n;

    int arr[n];
    cout<<" Enter The Number in the array:= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the number to search in the array:= ";
    cin>>x;
    int index;
    bool flag = false;   
    for(int i=n-1; i>=0; i--){
        if(arr[i] == x){
            flag = true;
            index = i;
            break;
        }
    }
    if(flag==true){
        cout<<"Number is present at "<<index<<" Index"<<endl;
    }
    else{
        cout<<"Number is not present"<<endl;
    }
}