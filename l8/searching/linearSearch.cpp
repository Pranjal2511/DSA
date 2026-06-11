#include <iostream>
using namespace std;

int linearSearch(int arr[],int n){
    int target;
    cout<<"enter the target : ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the arr = \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=linearSearch(arr,n);

    if(result != -1){
        cout<<"Target is found at index : "<<result<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    return 0;
}