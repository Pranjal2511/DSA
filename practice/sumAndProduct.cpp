#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total = total+arr[i];
    }
    return total;
}
int product(int arr[],int size){
    int pr=1;
    for(int i=1;i<size;i++){
        pr *=i;
    }
    return pr;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int result=sum(arr,size);
    cout<<"sum is "<<result<<endl;

    int multiply = product(arr,size);
    cout<<"Product is "<<multiply<<endl;
    
    return 0;
}