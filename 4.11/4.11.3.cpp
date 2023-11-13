#include<iostream>
using namespace std;

void _4_36(){
    int i=10;
    double d=3.14;
    i*=static_cast<int>(d);
    cout<<i<<endl;
}

int main(){
    _4_36();
    return 0;
}