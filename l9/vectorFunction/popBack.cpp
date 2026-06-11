#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    cout<<"size before pop = "<<vec.size()<<endl;

    vec.pop_back();
    vec.pop_back();
    cout<<"Size after pop = "<<vec.size()<<endl;
    vec.pop_back();

    for(int value:vec){
        cout<<value<<endl;
    }



    return 0;
}