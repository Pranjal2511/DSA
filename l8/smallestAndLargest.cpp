// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int nums[]={5,10,-15,-1,1,2,22};
//     int size=7;
//     int smallest=INT_MAX;

//     for(int i=0;i<size;i++){
//         if(nums[i]<smallest){
//             smallest=nums[i];
//         }

//     }
//     cout<<"Smallest = "<<smallest<<endl;

//     return 0;
// }


//largest

#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[]={1,2,55,48,63};
    int size=5;
    int largest=INT_MIN;
    for(int i=0;i < size;i++){
        // if(nums[i]>largest){
        // largest=nums[i];
        largest=max(nums[i],largest);
    }
    cout<<"largest = " <<largest;
        return 0;
    }
