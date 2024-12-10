#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vector:= ";
    cin>>n;
    cout<<"Enter the elements in the vector:= ";
    vector<int> v(n);
    for(int i=0; i<=n-1; i++){
        cin>>v[i];
    }
    int i,j;
    cout << "Enter the start index to reverse: ";
    cin>>i;
    cout << "Enter the end index to reverse: ";
    cin>>j;
    while(i<j){
        int temp;
        temp=v[j];
        v[j]=v[i];
        v[i]=temp;
        i++;
        j--;
    }
    cout << "Modified Vector: ";
    for(int i=0; i<=n-1; i++){
        cout<<v[i]<<" ";
        }

}