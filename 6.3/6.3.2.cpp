#include<iostream>
using namespace std;

int factorial(int val){
    if(val!=0){
        return factorial(val-1)*val;
    }
    return 1;
}

int main(){
    cout<<factorial(10)<<endl;
    return 0;
}