#include<iostream>
using namespace std;

void _4_29(){
    int x[10];int *p=x;
    cout<<sizeof(x)/sizeof(*x)<<endl;
    cout<<sizeof(p)/sizeof(*p)<<endl;
}

int main(){
    _4_29();
    return 0;
}