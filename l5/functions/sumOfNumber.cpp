#include <iostream>
using namespace std;

int sum(int n){
    int num=0;
    for(int i=0;i<=n;i++){
        
        num +=i;
    }
    return num;
}

int main() {
    
    cout<<sum(5);
    
    return 0;
}