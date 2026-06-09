#include <iostream>
using namespace std;

int sumOfDigit(int num){

    int Digisum=0;
    while(num>0){
        int lastDigit=num%10;
        num = num/10;
        Digisum = Digisum+lastDigit;
    }
    return Digisum;
}

int main() {

    cout<<sumOfDigit(145)<<endl;
    
    
    return 0;
}