#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;
    if(ch >= 65 && ch <=95){
        cout<<"UpperCase Character";
    }
    else{
        cout<<"LowerCase Character";
    }
    return 0;
}