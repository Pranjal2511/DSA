#include <bits/stdc++.h>
using namespace std;

int maxAndmin(int arr[],int size){
    int largest=0;
    int smallest=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[largest]){
            largest=i;
        }
        if(arr[i]<arr[smallest]){
            smallest=i;
        }

    }
    swap(arr[largest],arr[smallest]);
}


int main() {
    int arr[]={3,2,1,4,5,6,9,8,7};
    int size=9;
    maxAndmin(arr,size);
    cout<<"Array after sorting";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}