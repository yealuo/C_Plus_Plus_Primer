#include <iostream>
#include <vector>
using namespace std;

int _9_24(vector<int> vec) {
    int temp;

    temp = vec.at(0);
    temp = vec[0];
    temp = vec.front();
    temp = *vec.begin();

    return temp;
}

int main() {
    vector<int> vec;
    _9_24(vec);
    return 0;
}