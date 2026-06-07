#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number = ";
    cin>>n;
    bool isPrime=true;
    // for(int i=2;i*i<=n;i++)
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            cout<<"Number is Not prime";
            break;
        }
        else{
            cout<<"Number is prime";
            break;
        }
    }
    cout<<endl;
    return 0;
}