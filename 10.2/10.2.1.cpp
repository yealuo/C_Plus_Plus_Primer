#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

int _10_3(vector<int> vec){
    return accumulate(vec.begin(),vec.end(),0);
}