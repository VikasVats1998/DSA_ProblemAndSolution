#include<iostream>
using namespace std;
int max(int array[], int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(array[i]<array[i+1]){
            max=array[i+1];
        }
    }
    return max;
}
int min(int array[], int n){
    int min=0;
    for(int i=0;i<n;i++){
        if(array[i]<array[i+1]){
            min=array[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"Maximum array element : "<<max(array,n)<<endl;
    cout<<"Minium array element : "<<min(array,n);

}