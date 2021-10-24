#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Array in reverse order"<<endl;

    for(int i=n-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
}