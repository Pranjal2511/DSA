#include <iostream>
using namespace std;

int minOfTwo(int a ,int b){
    if(a>b){
        cout<<"B is minimum = "<< b;
    }
    else{
        cout<< "A is minimum= " <<a;
    }
}

int main() {

    minOfTwo(6,11);
    
    return 0;
}