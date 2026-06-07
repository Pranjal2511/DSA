#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number = ";
    cin>>n;
    int odd=0;
    for(int i=0;i<=n;i++){
        if(i%2 !=0){
            odd +=i;
            cout<<i<<" ";
            
            
            
        }
    }
    cout<<endl;
    cout<<odd;
    return 0;
}
