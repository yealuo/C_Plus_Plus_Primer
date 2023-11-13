#include<iostream>
using namespace std;

int _6_21(int a,int *b){
    return a>(*b)?a:(*b);
}

void swapPtr(int **a,int **b){
    int *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}