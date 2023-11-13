#include<iostream>
#include<vector>
using namespace std;

//_6_54
using funcPtr = int (*)(int, int);

void _6_54(vector<funcPtr> &vec,int func(int,int)){
    vec.push_back(func);
}

//_6_55
int add(int a,int b){
    return a+b;
}

int substract(int a,int b){
    return a-b;
}

int multiply(int a,int b){
    return a*b;
}

int divide(int a,int b){
    return a/b;
}

void _6_55(vector<funcPtr> &vec){
    vec.push_back(add);
    vec.push_back(substract);
    vec.push_back(multiply);
    vec.push_back(divide);
}

//_6_56
void _6_56(int a,int b){
    vector<funcPtr> vec;
    _6_55(vec);
    cout<<"a+b="<<vec[0](a,b)<<endl;
    cout<<"a-b="<<vec[1](a,b)<<endl;
    cout<<"a*b="<<vec[2](a,b)<<endl;
    cout<<"a/b="<<vec[3](a,b)<<endl;
}

int main(){
    _6_56(6,4);
    return 0;
}