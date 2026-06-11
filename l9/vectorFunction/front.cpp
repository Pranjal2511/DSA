#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    cout<<vec.front()<<endl;
    cout<<"Size = "<<vec.size()<<endl;
    // for(int value:vec){
    //     cout<<value<<" ";
    // }
    
    return 0;
}