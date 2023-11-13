#include<iostream>
#include<initializer_list>
using namespace std;

void _6_27(initializer_list<int> list){
    int result=0;
    for(const auto &elem:list){
        result+=elem;
    }
    cout<<result<<endl;
}

int main(){
    _6_27({1,2,3,4,5,6,7,8,9,10});
    return 0;
}